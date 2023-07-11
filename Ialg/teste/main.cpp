#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string nomeChapa1, nomeChapa2;
    string nomeLocal;
    int contagemA=0, contagemB=0;
    int totalVencedor;
    string chapaVencedora;
    int qtdeVotosA, qtdeVotosB;
    ifstream arqEleicao("eleicao.txt");
    arqEleicao>>nomeChapa1>>nomeChapa2;

    while(arqEleicao>>nomeLocal>>qtdeVotosA>>qtdeVotosB){
        contagemA+=qtdeVotosA;
        contagemB+=qtdeVotosB;
    }
    
    if(contagemA>contagemB){
        chapaVencedora=nomeChapa1;
        totalVencedor=contagemA;
    }
    else{
        chapaVencedora=nomeChapa2;
        totalVencedor=contagemB;
    }
    int totalVotos=contagemB+contagemA;
    float porcentagem=((float)totalVencedor*100/totalVotos);
    
    cout<<chapaVencedora<<endl<<totalVencedor<<endl<<porcentagem;
    return 0;
}