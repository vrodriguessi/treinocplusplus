#include <iostream>
using namespace std;

struct DataDeNascimento{
    int dia;
    int mes;
    int ano;
};

struct Pessoa{
    string nome;
    DataDeNascimento dataDeNascimento;
};

string procuraPessoaMaisVelha(Pessoa pessoa[], int qtdePessoas) {
    Pessoa pessoaMaisVelha;
    pessoaMaisVelha.nome = pessoa[0].nome;
    pessoaMaisVelha.dataDeNascimento.dia = pessoa[0].dataDeNascimento.dia;
    pessoaMaisVelha.dataDeNascimento.mes = pessoa[0].dataDeNascimento.mes;
    pessoaMaisVelha.dataDeNascimento.ano = pessoa[0].dataDeNascimento.ano;

    for (int i = 1; i < qtdePessoas; i++) {
        if (pessoa[i].dataDeNascimento.ano < pessoaMaisVelha.dataDeNascimento.ano ||
            (pessoa[i].dataDeNascimento.ano == pessoaMaisVelha.dataDeNascimento.ano &&
             pessoa[i].dataDeNascimento.mes < pessoaMaisVelha.dataDeNascimento.mes) ||
            (pessoa[i].dataDeNascimento.ano == pessoaMaisVelha.dataDeNascimento.ano &&
             pessoa[i].dataDeNascimento.mes == pessoaMaisVelha.dataDeNascimento.mes &&
             pessoa[i].dataDeNascimento.dia < pessoaMaisVelha.dataDeNascimento.dia)) {
            
            pessoaMaisVelha.nome = pessoa[i].nome;
            pessoaMaisVelha.dataDeNascimento.dia = pessoa[i].dataDeNascimento.dia;
            pessoaMaisVelha.dataDeNascimento.mes = pessoa[i].dataDeNascimento.mes;
            pessoaMaisVelha.dataDeNascimento.ano = pessoa[i].dataDeNascimento.ano;
        }
    }
    return pessoaMaisVelha.nome;
}

int main(){
    int qtdePessoas;
    cin>>qtdePessoas;
    Pessoa pessoasAnalisadas[qtdePessoas];
    for(int i = 0; i < qtdePessoas; i++){
        cin>>pessoasAnalisadas[i].nome>>pessoasAnalisadas[i].dataDeNascimento.dia>>pessoasAnalisadas[i].dataDeNascimento.mes>>pessoasAnalisadas[i].dataDeNascimento.ano;
    }
    string nomeDoMaisVelho;
    nomeDoMaisVelho = procuraPessoaMaisVelha(pessoasAnalisadas, qtdePessoas);
    cout<<nomeDoMaisVelho<<endl;

    return 0;
}