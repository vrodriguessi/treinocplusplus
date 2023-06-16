#include <iostream>

using namespace std;

int main(){
    int tamV;
    cin>>tamV;
    int vetor[tamV];
    for(int i = 0; i < tamV; i++){
        cin>>vetor[i];
    }

    int maior=vetor[0], indice=0;
    for(int a=0;a<tamV;a++){
        if(vetor[a]>maior){
            maior=vetor[a];
            indice=a;
        }
    }

    int menor=maior, indiceM=indice;
    for(int b=0;b<tamV;b++){
        if(vetor[b]<menor){
            menor=vetor[b];
            indiceM=b;
        }
    }

    cout<<maior<<" "<<menor<<" "<<indice<<" "<<indiceM<<endl;
    return 0;
}