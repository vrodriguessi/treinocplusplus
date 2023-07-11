#include <iostream>
#include <fstream>

using namespace std;
const int MAX = 20;

struct Carro {
    char marca[MAX];
    int ano;
    float distanciaUltima;
    float consumoLitros;
};

float calculo(Carro* carroAnalise) {
    return carroAnalise->distanciaUltima / carroAnalise->consumoLitros;
}

int main() {
    Carro* carroAnalisado = new Carro;
    ifstream arqEntrada("entrada.txt");

    if (!arqEntrada) {
        cout << "Erro ao abrir o arquivo" << endl;
    } else {
        arqEntrada.getline(carroAnalisado->marca, sizeof(carroAnalisado->marca));
        arqEntrada >> carroAnalisado->ano;
        arqEntrada >> carroAnalisado->distanciaUltima;
        arqEntrada >> carroAnalisado->consumoLitros;
    }

    float consumo;
    consumo = calculo(carroAnalisado);

    ofstream arqSaida("saida.txt");
    arqSaida << carroAnalisado->marca << endl
             << carroAnalisado->ano << endl
             << carroAnalisado->consumoLitros << endl
             << consumo << endl;

    delete carroAnalisado;

    return 0;
}
