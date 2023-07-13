#include <iostream>

using namespace std;

int main(){
    char gabarito[10];

    for(int i=0;i<10;i++){
        cin>>gabarito[i];
    }

    char provaA[10], provaB[10];
    for(int a=0;a<10;a++){
        cin>>provaA[a];
    }
    for(int b=0;b<10;b++){
        cin>>provaB[b];
    }

    int notaA=0, notaB=0;
    for(int c=0;c<10;c++){
        if(provaA[c]==gabarito[c])
        notaA++;
    }
    for(int d=0;d<10;d++){
        if(provaB[d]==gabarito[d])
        notaB++;
    }

    cout<<notaA<<endl;
    if(notaA>=6){
        cout<<"APROVADO"<<endl;
    }
    else{
        cout<<"REPROVADO"<<endl;
    }
    cout<<notaB<<endl;
    if(notaB>=6){
        cout<<"APROVADO"<<endl;
    }
    else{
        cout<<"REPROVADO"<<endl;
    }
    
    return 0;
}