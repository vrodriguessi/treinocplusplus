#include <iostream>
using namespace std;

void selectionSort(int vetor[], int tam, int parar){
    int aux;
    int posMaior;
    for (int i=0; i < tam; ++i){
    posMaior = i;
    for (int j=i+1; j < tam; ++j) {
        if (vetor[j] > vetor[posMaior])
            posMaior = j;
    }
		if(i<parar){
    aux = vetor[i];
    vetor[i] = vetor[posMaior];
    vetor[posMaior] = aux;
    }
}
}

int main(){

    int qtdeEntradas;
		cin>>qtdeEntradas;
    int vetorDeEntrada[qtdeEntradas];
    for(int i = 0; i < qtdeEntradas; i++){
        cin>>vetorDeEntrada[i];
            }
    int parada;
    cin>>parada;

		selectionSort(vetorDeEntrada, qtdeEntradas, parada);
		for(int i = 0; i < qtdeEntradas; i++){
			cout<<vetorDeEntrada[i]<<" ";
				}
    return 0;
}