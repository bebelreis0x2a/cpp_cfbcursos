#include <iostream>

int main(){
	
	std::string nome;

	//Se eu der espaço no std::cin, ele identifica como um caractere terminador, ignorando o que tiver depois do espaço
			  
	std::getline(std::cin, nome); //Para resolver isso, uso a função getLine

	std::cout << nome << std::endl;

	return 0;
}
