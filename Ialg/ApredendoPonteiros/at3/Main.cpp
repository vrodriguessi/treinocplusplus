#include <iostream>
using namespace std;
struct hidrocarboneto{
    int carbono;
    int hidrogenio;
};

hidrocarboneto* alocacaoDinamica(hidrocarboneto* capacidade, int& tamanho){
    hidrocarboneto* novaCapacidade = new hidrocarboneto[tamanho+1];
    copy(capacidade, capacidade+tamanho, novaCapacidade);
    tamanho++;
    delete [] capacidade;
    return novaCapacidade;
}

int main(){
    int tamanho = 0;
    int resultado = 0;
    hidrocarboneto* quantidadesDoElemento = new hidrocarboneto[0];

    quantidadesDoElemento = alocacaoDinamica(quantidadesDoElemento,tamanho);
    cin>>quantidadesDoElemento->carbono>>quantidadesDoElemento->hidrogenio;
    resultado += quantidadesDoElemento->carbono*12;
    resultado += quantidadesDoElemento->hidrogenio*1;
    cout<<resultado<<endl;

    return 0;
}
