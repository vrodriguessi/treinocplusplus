#include <iostream>
using namespace std;

struct Ponto{
    int x;
    int y;
};

struct Retangulo{
    Ponto verticeA;
    Ponto verticeB;
};

int verificarPontoEmRetangulos(int pontoX, int pontoY, int quantidadeRetangulos, Retangulo retangulos[]) {
    int dentro = 0;

    for (int i = 0; i < quantidadeRetangulos; i++) {
        if (pontoX >= retangulos[i].verticeA.x && pontoX <= retangulos[i].verticeB.x &&
            pontoY >= retangulos[i].verticeA.y && pontoY <= retangulos[i].verticeB.y) {
            dentro++;
        }
    }

    return dentro;
}

int main (){
    Ponto entrada;
    cin>>entrada.x>>entrada.y;
    int qtdeRetangulos;
    cin>>qtdeRetangulos;
    Retangulo retangulosAnalisados[qtdeRetangulos];
    for(int i = 0; i < qtdeRetangulos; i++){
        cin>>retangulosAnalisados[i].verticeA.x>>retangulosAnalisados[i].verticeA.y
          >>retangulosAnalisados[i].verticeB.x>>retangulosAnalisados[i].verticeB.y;
    }
		int retangulosOndeEstaContido;
		retangulosOndeEstaContido = verificarPontoEmRetangulos(entrada.x, entrada.y, qtdeRetangulos, retangulosAnalisados);
    cout<<retangulosOndeEstaContido<<endl;
    return 0;
}