#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    // Em C a alocação dinâmica equivalente ao "new" do C++ é feita com malloc.
    int *vetor = (int *) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    long soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    printf("Soma de todos os elementos: %ld\n", soma);

    // Equivalente ao "delete[]" do C++.
    free(vetor);

    return 0;
}
