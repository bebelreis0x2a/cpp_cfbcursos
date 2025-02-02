#include <iostream>
#include <list>

int main(){
	
	// Listas: 

	std::list <int> valor; 
	//std::list <int> valor(50); 	-> lista com 50 posições
	//std::list <int> valor(5, 50); -> lista com 5 posições com valor igual a 50
	//std::list <int> a, b, c;	-> posso criar várias listas do mesmo tipo
	int tamanho = 10;

	for (int i=0; i < tamanho; i++){
		valor.push_front(i); //Insiro na frente da lista o valor de i
	}
		
	tamanho = valor.size(); //Com os valores inseridos, nossa lista tem um tamanho
	
	std::cout << "Tamanho da lista: " << valor.size() << std::endl;

	for(int i = 0; i < tamanho; i++){
		std::cout << valor.front() << '\n';
		valor.pop_front();
	}
	
	for (int i=0; i < tamanho; i++){
		valor.push_back(i); //Insiro os valores por detrás da lista
	}
	
	std::cout << "Inserindo os valores por detrás da lista\nTamanho da lista: " << valor.size() << std::endl;

	for(int i = 0; i < tamanho; i++){
		std::cout << valor.front() << '\n'; //Ao invés de ter usado valor.push_back(i), 
						    //eu poderia ter usado valor.back() aqui no print

		valor.pop_front(); //Dou o pop_front() para que o valor da frente seja na próxima iteração o detrás
	}

	//Posso, com as listas, inserir os valores na posição que eu quiser!

	for (int i=0; i < 10; i++){
		valor.push_back(i); //Insiro os valores por detrás da lista
	}
	
	std::list <int>::iterator iteracao; //crio um iterator para fazer a iteração

	iteracao = valor.begin(); //Indico o início da minha lista para o iterator
	advance(iteracao, 5); //Passo em qual posição será adicionado o valor
			      
	valor.insert(iteracao, 666); //Indico o valor que quero adicionar na minha lista
				    
	std::cout << "\nUsando o iterator para inserir valores de qualquer posição da minha lista\n";

	for (int i = 0; i < 10; i++){
		std::cout<< valor.front() << std::endl;
		valor.pop_front();
	}

	return 0;
}
