#include <iostream>
//Além do extern, posso usar o bom e velho cabeçalho header!
#include "variaveis.h"

// O extern é usado para acessar variáveis e funções de arquivos diferentes!

void imprimirValor(); // Estou prototipando a função do arquivo auxiliar.cpp!

//Crio uma variável global para acessar em outros arquivos!
auto numero{42};

//Função externa do meu arquivo auxiliar!
extern auto exibirMsg()->std::string;

int main(int argc, char *argv[]){
		
	imprimirValor();

	std::cout << exibirMsg() << std::endl;
	std::cout << tmp << std::endl;

	return 0;
}

// Para compilar: g++ aula57.cpp auxiliar.cpp -o a.out
