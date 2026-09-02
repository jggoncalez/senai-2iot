#include <stdio.h>

// C não tem herança nem funções virtuais, mas dá pra simular as duas coisas:
// - "Herança": colocando a struct base (Veiculo) como primeiro campo das
//   structs derivadas (Carro e Moto). Assim um ponteiro para Carro/Moto
//   também pode ser tratado como ponteiro para Veiculo.
// - "Método virtual": guardando na struct base um ponteiro de função
//   (exibirInfo), que cada tipo derivado configura para apontar para a
//   sua própria implementação.

typedef struct Veiculo {
    void (*exibirInfo)(struct Veiculo *self);
} Veiculo;

typedef struct {
    Veiculo base; // precisa ser o primeiro campo para simular herança
    int portas;
} Carro;

typedef struct {
    Veiculo base; // precisa ser o primeiro campo para simular herança
    int cilindradas;
} Moto;

void carroExibirInfo(Veiculo *self) {
    Carro *carro = (Carro *) self;
    printf("Carro com %d portas.\n", carro->portas);
}

void motoExibirInfo(Veiculo *self) {
    Moto *moto = (Moto *) self;
    printf("Moto de %d cilindradas.\n", moto->cilindradas);
}

int main() {
    Carro carro;
    carro.base.exibirInfo = carroExibirInfo;
    carro.portas = 4;

    Moto moto;
    moto.base.exibirInfo = motoExibirInfo;
    moto.cilindradas = 160;

    // Chamando o método "virtual" através de um ponteiro para a base Veiculo,
    // igual pediria o exercício com Veiculo*.
    Veiculo *veiculos[2];
    veiculos[0] = (Veiculo *) &carro;
    veiculos[1] = (Veiculo *) &moto;

    for (int i = 0; i < 2; i++) {
        veiculos[i]->exibirInfo(veiculos[i]);
    }

    return 0;
}
