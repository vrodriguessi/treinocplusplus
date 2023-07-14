#include <iostream>
using namespace std;

struct Brinquedo{
		string nomeBrinquedo;
		int qtdeDisponivel;
		int qtdeRequerida;
};

struct Carta{
		string nome;
		string brinquedoPedido;
};

int main (){
		int numeroDeCartas;
		cin>>numeroDeCartas;
		Carta cartasDasCriancas[numeroDeCartas];

		for(int i = 0; i < numeroDeCartas; i++){
				cin>>cartasDasCriancas[i].nome>>cartasDasCriancas[i].brinquedoPedido;
		}

		int qtdeBrinquedos;
		cin>>qtdeBrinquedos;
		Brinquedo brinquedosDoPapaiNoel[qtdeBrinquedos];
		for(int j = 0; j < qtdeBrinquedos; j++){
				cin>>brinquedosDoPapaiNoel[j].nomeBrinquedo>>brinquedosDoPapaiNoel[j].qtdeDisponivel;
				brinquedosDoPapaiNoel[j].qtdeRequerida = 0;
		}

		int index = 0;
		while(index < numeroDeCartas){
			for(int a = 0; a < qtdeBrinquedos; a++){
			if(brinquedosDoPapaiNoel[a].nomeBrinquedo==cartasDasCriancas[index].brinquedoPedido){
				brinquedosDoPapaiNoel[a].qtdeRequerida+=1;
			}
		}
		index++;
	}

		for(int i = 0; i < qtdeBrinquedos; i++){
				if(brinquedosDoPapaiNoel[i].qtdeRequerida > brinquedosDoPapaiNoel[i].qtdeDisponivel)
				cout<<brinquedosDoPapaiNoel[i].nomeBrinquedo<<" ";
		}

		return 0;
}