#include <iostream>

using namespace std;

int main (){
    int vetorEntrada[10];
    for(int i=0; i<10; i++){
        cin>>vetorEntrada[i];
    }
    
    int multDois=0, multTres=0;
    for(int b=0;b<10;b++){
    if(vetorEntrada[b]%2==0){
        multDois++;
    }
    if(vetorEntrada[b]%3==0){
        multTres++;
    }
}

    int indexDois=0, indexTres=0;
    int vetorDois[multDois], vetorTres[multTres];
    for(int a=0;a<10;a++){
        if(vetorEntrada[a]%2==0){
            vetorDois[indexDois]=vetorEntrada[a];
            indexDois++;
        }
    }
    for(int g=0;g<10;g++){
        if(vetorEntrada[g]%3==0){
            vetorTres[indexTres]=vetorEntrada[g];
            indexTres++;
        }
    }

    int maiorDois=vetorDois[0];
    int maiorTres=vetorTres[0];
    for(int b=0;b<multDois;b++){
        if(vetorDois[b]>maiorDois){
            maiorDois=vetorDois[b];
        }
    }
    for(int f=0;f<multTres;f++){
        if(vetorTres[f]>maiorTres){
            maiorTres=vetorTres[f];
        }
    }
    
    for(int p=0;p<multDois;p++){
        cout<<vetorDois[p]<<" ";
    }
    cout<<endl<<maiorDois<<endl;
    for(int u=0;u<multTres;u++){
        cout<<vetorTres[u]<<" ";
    }
    cout<<endl<<maiorTres<<endl;
    return 0;
}