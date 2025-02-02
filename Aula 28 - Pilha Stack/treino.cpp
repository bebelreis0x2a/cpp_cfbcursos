#include <iostream>
#include <stack>
#include <string.h>

int main(){
	std::stack <std::string> navegacao;
	std::string valores;
	char opcao[1];

	navegacao.push("inicio");

	while(!navegacao.empty()){		
		std::cout << "Quant. de elementos: ";
		std::cout << navegacao.size() << '\n';
		std::cout << "Elemento do topo: ";
		std::cout << navegacao.top() << "\n";

		std::cout << "Deseja inserir um valor? [s/n] ";
		std::cin >> opcao;

		if(!strcmp(opcao, "s")){
			std::cout << "Insira um valor: ";
			std::cin >> valores;
			navegacao.push(valores);	
		}

		std::cout << "Deseja remover um elemento da lista? [s/n] ";
		std::cin >> opcao;

		if(!strcmp(opcao, "s")){
			navegacao.pop();
		}
		system("clear");
	}

	std::cout << "Programa finalizado...\n";

	return 0;
}
