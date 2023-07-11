#include <iostream>
using namespace std;
struct qtdMedalhas{
    int qtdMedalhas;
};

qtdMedalhas* alocacaoDinamica(qtdMedalhas*, int);

int main(){
    int tamanho = 3;
    int resultadoDaPontuacaoFinal = 0;
    int* pontoMedalha = new int[tamanho];
    for(int i = 0 ; i < tamanho ; i++)
        cin>> pontoMedalha[i];
    tamanho = 0;
    qtdMedalhas* qtdDeMedalhas = new qtdMedalhas[tamanho];
    for(int i = 0 ; i < 3 ; i++){
        qtdDeMedalhas = alocacaoDinamica(qtdDeMedalhas,tamanho);
        cin>>qtdDeMedalhas[i].qtdMedalhas;
        resultadoDaPontuacaoFinal += qtdDeMedalhas[i].qtdMedalhas * pontoMedalha[i];
    }
    cout<<resultadoDaPontuacaoFinal<<endl;
}
qtdMedalhas* alocacaoDinamica(qtdMedalhas* capacidadeTotal, int tamanho){
    qtdMedalhas* novaCapacidade = new qtdMedalhas[tamanho+1];
    copy(capacidadeTotal, capacidadeTotal + tamanho, novaCapacidade);
    delete[] capacidadeTotal;
    tamanho++;
    return novaCapacidade;
}