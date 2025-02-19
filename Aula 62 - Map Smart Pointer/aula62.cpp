#include <iostream>

int main(int argc, char *argv[]){
	// Os smart pointers deletam o objeto apontado automaticamente através de uma exceção,
	// Liberando memória. Com Smart Pointers, não preciso usar o delete!
	
	int *pnum;
	int num = 10;

	pnum = &num;

	std::cout << "Endereço de num: " << pnum << "\nValor de num: " << *pnum << std::endl;

	// Outra forma de declarar ponteiros:
	
	int *ponteiro = new int();
	*ponteiro = 10;

	std::cout << "Endereço de ponteiro: " << ponteiro << "\nValor de ponteiro: " << *ponteiro << "\n\n";

	delete pnum; //Apago o ponteiro pnum para liberar espaço na memória
	delete ponteiro; //Apago o ponteiro pnum para liberar espaço na memória
				
	//O compilador gera um warning, pois utilizamos o delete caso eu declarasse o meu 
	//ponteiro com new, pois nesses casos, o ponteiro é armazenado na memória heap
	
	return 0;

	//No arquivo aula61-smart.cpp estará os ponteiros inteligentes
}
