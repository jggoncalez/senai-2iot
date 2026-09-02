#include <stdio.h>

// Troca usando ponteiros
void trocaPonteiros(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Troca "por referência". Em C puro não existe o tipo referência do C++,
// então simulamos o mesmo comportamento recebendo também um ponteiro,
// mas tratando os parâmetros como se já estivessem "ligados" às variáveis
// originais (é exatamente assim que o compilador implementa referências
// por baixo dos panos).
void trocaReferencia(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    printf("\nAntes da troca: x = %d, y = %d\n", x, y);

    trocaPonteiros(&x, &y);
    printf("Depois de trocaPonteiros: x = %d, y = %d\n", x, y);

    trocaReferencia(&x, &y);
    printf("Depois de trocaReferencia: x = %d, y = %d\n", x, y);

    return 0;
}
