#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]){

	// Um foreach é uma função que recebe 3 parâmetros:
	// A pos. inicial
	// A pos. final
	// A função lambda que irá operar esses elementos

	std::vector<int> n{10, 20, 30, 42, 50, 60, 70, 80, 90, 100};
	std::vector<int>::iterator it;

	// Usando o iterator para varrer meu vetor	
	for(it = n.begin(); it < n.end(); it++){
		std::cout << *it << std::endl;
	}

	printf("\n");
	
	// Usando o auto:
	for(auto i:n){
		std::cout << i << std::endl;
	}

	printf("\n");

	// FOREACH é um ALGORITMO! Uma FUNÇÃO!
	
	// A função lambda receberá os elementos passados pelo for_each pela a variável 
	// dentro dos parênteses
	for_each(n.begin(), n.end(), [](int num){
		std::cout << num << std::endl;		
	});

	// Posso fazer uma alteração que imprime os valores alterados, mas sem alterar o vetor:
	
	printf("\n");

	for_each(n.begin(), n.end(), [](int num){
		num+=100;
		std::cout << num << std::endl;		
	});

	printf("\n");

	// Ou posso alterar os valores acessando o endereço de memória de cada elemento do vetor
	for_each(n.begin(), n.end(), [](int& num){
		num+=100;
	});
	for(auto i:n){
		std::cout << "VALOR ATUAL: " << i << std::endl;		
	};

	return 0;
}

