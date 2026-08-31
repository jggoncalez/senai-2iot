#include <stdio.h>

int main(){
    int i, valueInserted, result = 1;

    printf("Digite o número: ");
    scanf("%i", &valueInserted);

    for (i = 0; i < valueInserted; i++)
    {
        result *= (valueInserted - i);
    }

    printf("Resultado: %i\n", result);

    return 0;
}