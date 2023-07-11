#include <iostream>
using namespace std;

int* alocacaoDinamica(int* capacidade, int &tamanho){
    int* novoTamanho = new int[tamanho+1];
    copy(capacidade, capacidade+tamanho, novoTamanho);
    tamanho++;
    delete [] capacidade;
    return novoTamanho;
}

bool verificarSeCapicua(int* digitosAnalisados, int tamanho){
    int esquerda = 0;
    int direita = tamanho - 1;
    while(esquerda<direita){
        if(digitosAnalisados[esquerda] != digitosAnalisados[direita]){
        return false;
        }
        else if(digitosAnalisados[esquerda] == digitosAnalisados[direita]){
        cout<<esquerda<<" "<<digitosAnalisados[esquerda]<<" "<<direita<<" "<<digitosAnalisados[direita]<<" ";
        }
        esquerda++;
        direita--;
    }
    cout<<endl;
    return true;
}

int main(){
    int qtdeDigitos, tam = 0;
    cin>>qtdeDigitos;
    int* digitos = new int[tam];
    for (int i = 0; i<qtdeDigitos; i++){
        digitos = alocacaoDinamica(digitos,tam);
        cin>>digitos[i];
    }

    if(verificarSeCapicua(digitos, tam)){
        cout<<"sim"<<endl;
    }
    else
        cout<<"nao"<<endl;

    return 0;
}