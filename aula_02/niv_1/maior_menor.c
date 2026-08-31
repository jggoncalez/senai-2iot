#include <stdio.h>

int main(){
    int i, valueInserted, maior, menor;
    int values[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite o número %i: ", i+1);
        scanf("%i", &valueInserted);

        if (i == 0) {
            maior = menor = valueInserted; // primeira leitura define os dois
        } else {
            if (valueInserted > maior) maior = valueInserted;
            if (valueInserted < menor) menor = valueInserted;
        }

        values[i] = valueInserted;
    }

    printf("Maior valor: %i\nMenor valor: %i\n", maior, menor);

    return 0;
}