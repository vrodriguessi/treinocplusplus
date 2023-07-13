#include <iostream>
using namespace std;

int *alocacaoDinamica(int *numeros, int &tamanho){
    int *novoNumero = new int [tamanho+1];
    copy(numeros, numeros+tamanho, novoNumero);
    tamanho++;
    delete [] numeros;
    return novoNumero;
}

bool descobreSeOsVetoresSaoIguais(int *primeiroVetor, int *segundoVetor, int tamanho){
    int contadorA[1000] = {0};
    int contadorB[1000] = {0};

    for(int i = 0; i< tamanho; i++){
        contadorA[primeiroVetor[i]]++;
        contadorB[segundoVetor[i]]++;
    }

    for(int i = 0; i< tamanho; i++){
        if(contadorA[i]!=contadorB[i]){
        return false;
        }
    }
    return true;
}

int main(){
    int tamanhoDoVetor;
    cin>>tamanhoDoVetor;
    int tamA=0, tamB=0;
    int *numerosDoVetorA = new int[tamA];
    for(int i = 0; i < tamanhoDoVetor; i++){
        numerosDoVetorA = alocacaoDinamica(numerosDoVetorA, tamA);
        cin>>numerosDoVetorA[i];
    }

    int *numerosDoVetorB = new int[tamB];
    for(int i = 0; i < tamanhoDoVetor; i++){
        numerosDoVetorB = alocacaoDinamica(numerosDoVetorB, tamB);
        cin>>numerosDoVetorB[i];
    }
    
    if(descobreSeOsVetoresSaoIguais(numerosDoVetorA, numerosDoVetorB, tamanhoDoVetor)){
        cout<<"IGUAIS"<<endl;
    }
    else
        cout<<"DIFERENTES"<<endl;

    return 0;
}