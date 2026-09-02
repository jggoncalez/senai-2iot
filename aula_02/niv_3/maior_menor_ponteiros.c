#include <stdio.h>

// Recebe o vetor, seu tamanho e dois ponteiros. A função preenche os
// endereços apontados por max e min com o maior e o menor valor do vetor.
void encontrarMaiorMenor(int *vetor, int tamanho, int *max, int *min) {
    *max = vetor[0];
    *min = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *max) {
            *max = vetor[i];
        }
        if (vetor[i] < *min) {
            *min = vetor[i];
        }
    }
}

int main() {
    int tamanho;

    printf("Quantos números deseja digitar? ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior, menor;
    encontrarMaiorMenor(vetor, tamanho, &maior, &menor);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
