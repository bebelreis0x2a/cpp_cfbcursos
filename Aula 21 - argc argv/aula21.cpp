#include <iostream>
#include <string.h>

int main(int argc, char *argv[]){ // *argv[] armazena os argumentos passados, o argc armazena a quantidade de argumentos passados
	
	//O primeiro parâmetro é o nome do programa!
	std::cout << argv[0] << std::endl;

	//A partir do segundo parâmetro, ele imprime os argumentos passados
	
	for (int i = 1; i <= 3; i++){
		std::cout << argv[i];

		//strcmp retorna 0 (ou seja, falso) quando as duas strings são iguais!
		if(!strcmp(argv[i],"gordon")){
			std::cout << " FREEMAN!";
		}

		std::cout << std::endl;
	}

	//A quantidade de parâmetros	
	std::cout << argc << std::endl;
}
