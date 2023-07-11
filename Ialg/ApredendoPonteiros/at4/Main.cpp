#include <iostream>
#include <iomanip>
using namespace std;

struct tempoDoSalto{
    float tempo;
};

tempoDoSalto* alocacaoDinamica(tempoDoSalto* capacidade, int& tamanho){
    tempoDoSalto* novoTempo = new tempoDoSalto[tamanho+1];
    copy(capacidade, capacidade+tamanho, novoTempo);
    tamanho++;
    delete [] capacidade;
    return novoTempo;
}

int main(){
    int tamanho = 0;
    tempoDoSalto* tempoDoSaltoDeCadaAtleta = new tempoDoSalto[tamanho];
    for(int i = 0; i<8 ;i++){
        tempoDoSaltoDeCadaAtleta = alocacaoDinamica(tempoDoSaltoDeCadaAtleta, tamanho);
        cin>>tempoDoSaltoDeCadaAtleta[i].tempo;
    }
    float maiorNum=0;
    for(int i = 0; i<8; i++){
        if(tempoDoSaltoDeCadaAtleta[i].tempo>maiorNum){
            maiorNum = tempoDoSaltoDeCadaAtleta[i].tempo;
        }
    }
    float menorNum = maiorNum;
    int posicaoMenorNum;
    for(int i = 0; i<8; i++){
        if(tempoDoSaltoDeCadaAtleta[i].tempo < menorNum){
            menorNum = tempoDoSaltoDeCadaAtleta[i].tempo;
            posicaoMenorNum = i;
        }
    }
    for(int i = 0; i<8 ; i++){
        if(i != posicaoMenorNum){
            tempoDoSaltoDeCadaAtleta[i].tempo -= menorNum;
            cout<<setprecision(3)<<tempoDoSaltoDeCadaAtleta[i].tempo<<endl;
        }
        else{
            cout<<tempoDoSaltoDeCadaAtleta[i].tempo<<endl;
        }
    }
    return 0;
}