#include <iostream>

// O meu arquivo auxiliar NÃO pode ter uma função main(), apenas o arquivo principal!

extern int numero; //Defino que essa variável é externa!

void imprimirValor(){
	std::cout << numero << std::endl;
}

auto exibirMsg()->std::string{
	return "Olá, mundo!";
}
