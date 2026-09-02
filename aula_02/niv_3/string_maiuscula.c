#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Recebe a string "por referência" (em C isso é feito passando o
// endereço do vetor de caracteres) e converte cada caractere para
// maiúsculo, alterando o conteúdo original.
void paraMaiusculas(char *texto) {
    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = toupper((unsigned char) texto[i]);
    }
}

int main() {
    char texto[100];

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    // remove o '\n' deixado pelo fgets, se houver
    texto[strcspn(texto, "\n")] = '\0';

    paraMaiusculas(texto);

    printf("Frase em maiúsculas: %s\n", texto);

    return 0;
}
