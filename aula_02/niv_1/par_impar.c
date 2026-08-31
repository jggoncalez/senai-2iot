#include <stdio.h>

int main(){
    int value;

    printf("Digite um número: ");
    scanf("%i", &value);

    printf("%s\n", (value % 2 == 0) ? "par" : "impar");

    return 0;
}