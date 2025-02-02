#include <iostream>
#include <list>

int main(){
	
	std::list <int> valor; 
	int tamanho;

	valor.push_front(2);
	valor.push_front(5);
	valor.push_front(6);
	valor.push_front(9);
	valor.push_front(1);
	valor.push_front(4);
	valor.push_front(3);
	valor.push_front(7);
	valor.push_front(0);
	valor.push_front(8);
		
	tamanho = valor.size(); //Com os valores inseridos, nossa lista tem um tamanho
	
	std::cout << "Valores inseridos de forma aleatória:\n\n";

	for(int i = 0; i < tamanho; i++){
		std::cout << valor.front() << '\n';
		valor.pop_front();
	}
	
	valor.push_front(2);
	valor.push_front(5);
	valor.push_front(6);
	valor.push_front(9);
	valor.push_front(1);
	valor.push_front(4);
	valor.push_front(3);
	valor.push_front(7);
	valor.push_front(0);
	valor.push_front(8);
		
	valor.sort();
	std::cout << "Organizando os valores com a função sort():\n\n";

	for(int i = 0; i < tamanho; i++){
		std::cout << valor.front() << '\n';
		valor.pop_front();
	}
	
	valor.push_front(2);
	valor.push_front(5);
	valor.push_front(6);
	valor.push_front(9);
	valor.push_front(1);
	valor.push_front(4);
	valor.push_front(3);
	valor.push_front(7);
	valor.push_front(0);
	valor.push_front(8);
		
	valor.reverse();
	std::cout << "Organizando os valores com a função reverse():\n\n";

	for(int i = 0; i < tamanho; i++){
		std::cout << valor.front() << '\n';
		valor.pop_front();
	}

	
	valor.push_front(2);
	valor.push_front(5);
	valor.push_front(6);
	valor.push_front(9);
	valor.push_front(1);
	valor.push_front(4);
	valor.push_front(3);
	valor.push_front(7);
	valor.push_front(0);
	valor.push_front(8);
	
	valor.sort();	
	valor.reverse();
	std::cout << "Organizando os valores com a função sort() mais a função reverse():\n\n"; 

	for(int i = 0; i < tamanho; i++){
		std::cout << valor.front() << '\n';
		valor.pop_front();
	}


	return 0;
}
