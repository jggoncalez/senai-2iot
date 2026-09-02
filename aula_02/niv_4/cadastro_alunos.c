#include <stdio.h>

#define TOTAL_ALUNOS 3
#define TAM_NOME 50

typedef struct {
    char nome[TAM_NOME];
    int matricula;
    float nota;
} Aluno;

int main() {
    Aluno alunos[TOTAL_ALUNOS];

    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        printf("--- Aluno %d ---\n", i + 1);

        printf("Nome: ");
        scanf(" %49[^\n]", alunos[i].nome);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    int indiceMaiorNota = 0;
    for (int i = 1; i < TOTAL_ALUNOS; i++) {
        if (alunos[i].nota > alunos[indiceMaiorNota].nota) {
            indiceMaiorNota = i;
        }
    }

    printf("\nAluno com a maior nota:\n");
    printf("Nome: %s\n", alunos[indiceMaiorNota].nome);
    printf("Matricula: %d\n", alunos[indiceMaiorNota].matricula);
    printf("Nota: %.1f\n", alunos[indiceMaiorNota].nota);

    return 0;
}
