#include <iostream>
#include <queue>

int main(){	
	// Na fila, o primeiro elemento a entrar, é o primeiro elemento a sair da fila (FIFO: First-in, first-out).

	std::queue <std::string> cartas;

	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");

	while(!cartas.empty()){
		std::cout << "Tamanho da fila: "
			  << cartas.size()
			  << std::endl;

		std::cout << "Primeira carta: "
			  << cartas.front()
			  << std::endl;

		std::cout << "Última carta: "
			  << cartas.back()
			  << std::endl
			  << std::endl;

		cartas.pop();
	}

	return 0;
}
