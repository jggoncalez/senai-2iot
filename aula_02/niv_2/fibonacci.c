#include <stdio.h>

int main(){
    int valueInserted, newValue = 1, lastValue = 0;

    printf("Digite o número: ");
    scanf("%i", &valueInserted);

    while(lastValue <= valueInserted)
    {
        printf("%i ", lastValue);
        newValue = lastValue + newValue;
        lastValue = newValue - lastValue; 
    }

    return 0;
}