#include <iostream>
#include <stack>

int main(){
	// Pilhas são como vetores com controles específicos, onde o primeiro elemento inserido 
	// será o último elemento a ser trabalhado. É como se fosse um tubo onde a primeira bola
	// a entrar nesse tubo, será o último a sair. Isso se chama LIFO (last-in, first-out)!
	// exemplos: mecanismo de fazer/desfazer em editores de texto, navegação entre páginas web
	
	std::stack <std::string> cartas;

	if(cartas.empty()){
		std::cout << "A pilha está vazia." << std::endl;
	}
	
	//push é o mesmo que empilha
	cartas.push("Rei de Copas"); //A primeira inserida será a última de sair da pilha
	cartas.push("Rei de Espadas"); 	
	cartas.push("Rei de Ouros"); 
	cartas.push("Rei de Paus"); //A última inserida será a primeira a sair da pilha 

	std::cout << "Tamanho da pilha: " << cartas.size() << " elementos." << std::endl;
	std::cout << cartas.top() << std::endl;

	cartas.pop();

	std::cout << "\ncartas.pop()\nTamanho da pilha: " << cartas.size() << " elementos." << std::endl;
	std::cout << cartas.top() << std::endl;

	while(!cartas.empty()){
		cartas.pop();
	}

	if(cartas.empty()){
		std::cout << "A pilha está vazia." << std::endl;
	}

	return 0;
}
