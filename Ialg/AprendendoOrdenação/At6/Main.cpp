#include <iostream>
#include <fstream>
using namespace std;

struct envolvidosNaOperacao{
    int K;
    char nome[15];
};

void selectionSortCrescente(envolvidosNaOperacao vetor[], int tam, int Ka){
    int posMenor;
    envolvidosNaOperacao aux;
    for (int i=0; i < Ka; ++i) {
    posMenor = i;
    for (int j=i+1; j < Ka; ++j) {
        if (vetor[j].K < vetor[posMenor].K)
            posMenor = j;
    }
    if(i <= Ka && posMenor <= Ka){
    aux = vetor[i];
    vetor[i] = vetor[posMenor];
    vetor[posMenor] = aux;
}
}
}

void selectionSortDecrescente(envolvidosNaOperacao vetor[], int KK, int indice){
    int posMaior;
    envolvidosNaOperacao aux;
    for (int i=KK; i < indice; ++i) {
    posMaior = i;
    for (int j=i+1; j < indice; ++j) {
        if (vetor[j].K > vetor[posMaior].K)
            posMaior = j;
    }
    if(i >= KK){
    aux = vetor[i];
    vetor[i] = vetor[posMaior];
    vetor[posMaior] = aux;
}
}
}

int main(){
    int tamanho = 30;
    int index = 0;
    envolvidosNaOperacao analisados[tamanho];
    ifstream arquivoEntrada("fases.txt");
    if(!arquivoEntrada){
        cout<<"Erro ao abrir o arquivo!";
    } 
    else{
    while(arquivoEntrada>>analisados[index].K>>analisados[index].nome){
        index++;
    }
    int K;
    cin>>K;
    
    selectionSortCrescente(analisados, index, K);
    selectionSortDecrescente(analisados, K, index);
    
    for(int i = 0; i < index; i++){
        cout<<analisados[i].nome<<endl;
        }
    }

    return 0;
}