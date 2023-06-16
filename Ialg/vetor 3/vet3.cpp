#include <iostream>

using namespace std;

int main(){
    int tamVetor, x;
    cout<<"Insira um valor maior ou igual a 3: "<<endl;
    cin>>x;
    if(x>=3){
        tamVetor=x;
    }
    else{
        cout<<"Valor incompativel";
    }
    int vetor[tamVetor];
    cout<<"Insira o vetor de tamanho "<<tamVetor<<endl;
    for(int i=0;i<tamVetor;i++){
        cin>>vetor[i];
    }

    cout<<"Insira um valor para ser a soma dos numeros: ";
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