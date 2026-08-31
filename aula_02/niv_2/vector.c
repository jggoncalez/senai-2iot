#include <stdio.h>

int main(){
    int i, valueInserted, valueSearch;
    int found = 0;
    int values[10];

    for (i = 0; i < 10; i++)
    {
        printf("Digite o número %i: ", i+1);
        scanf("%i", &valueInserted);
        values[i] = valueInserted;
    }

    printf("Que valor deseja procurar? ");
    scanf("%i", &valueSearch);

    i = 0;
    while (i<10){
        if(valueSearch == values[i]){
            printf("Encontrado! Posição: %i", i+1);
            found = 1;
            break;
        }
        i++;
    }

    if (!found) {
        printf("Valor não encontrado.");
    }

    return 0;
}