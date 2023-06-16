#include <iostream>

using namespace std;

int main(){
    int tamVetor;
    cin>>tamVetor;
    int vetor[tamVetor];
    for(int i=0;i<tamVetor;i++){
        cin>>vetor[i];
    }
    int soma;
    cin>>soma;
    for(int a=0;a<tamVetor-2;a++){
        if(vetor[a]+vetor[a+1]+vetor[a+2]==soma){
            cout<<vetor[a]<<" "<<vetor[a+1]<<" "<<vetor[a+2]<<endl;
            break;
        }
    }
    return 0;
}