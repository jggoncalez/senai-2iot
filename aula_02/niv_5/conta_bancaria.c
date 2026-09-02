#include <stdio.h>
#include <string.h>

// C não tem classes, então simulamos a classe ContaBancaria com uma struct
// (fazendo o papel dos atributos "privados") e um conjunto de funções que
// só devem ser usadas para manipular essa struct (fazendo o papel dos
// métodos públicos).
typedef struct {
    char titular[50];
    double saldo;
} ContaBancaria;

void inicializarConta(ContaBancaria *conta, const char *titular, double saldoInicial) {
    strcpy(conta->titular, titular);
    conta->saldo = saldoInicial;
}

void depositar(ContaBancaria *conta, double valor) {
    if (valor <= 0) {
        printf("Valor de deposito invalido.\n");
        return;
    }
    conta->saldo += valor;
}

void sacar(ContaBancaria *conta, double valor) {
    if (valor <= 0) {
        printf("Valor de saque invalido.\n");
        return;
    }
    if (valor > conta->saldo) {
        printf("Saque bloqueado: valor maior que o saldo disponivel.\n");
        return;
    }
    conta->saldo -= valor;
}

void exibirSaldo(const ContaBancaria *conta) {
    printf("Titular: %s | Saldo: R$ %.2f\n", conta->titular, conta->saldo);
}

int main() {
    ContaBancaria conta;
    inicializarConta(&conta, "Kagome", 100.0);

    exibirSaldo(&conta);

    depositar(&conta, 50.0);
    exibirSaldo(&conta);

    sacar(&conta, 500.0); // deve ser bloqueado
    exibirSaldo(&conta);

    sacar(&conta, 30.0);
    exibirSaldo(&conta);

    return 0;
}
