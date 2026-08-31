#include <stdio.h>

int main(){

    int i, valueInserted;
    int values[4];

    for (i = 0; i < 4; i++) {
        printf("Digite o número %i: ", i + 1);
        if (scanf("%d", &valueInserted) != 1) {
            printf("Entrada inválida\n");
            return 1;
        }
        values[i] = valueInserted;
    }

    printf("Vetor invertido:\n");
    for (i = 3; i >= 0; i--) {   // agora começa em 3 (o último índice válido)
        printf("%d ", values[i]);
    }

    return 0;
}