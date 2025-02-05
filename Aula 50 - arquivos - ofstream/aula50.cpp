#include <iostream>
#include <fstream> // Para trabalhar com os arquivos

int main(){
	
	// ofstream -> A informação estará saindo do programa e indo para o arquivo
	// ifstream -> A informação estará saindo do arquivo e entrando no nosso programa
	// fstream  -> Entrada e saída para o arquivo

	std::ofstream arquivo;

	arquivo.open("meu-primeiro-arquivo.txt",std::ios::app); // Se caso eu não usar o ios::app, irei sobrescrever o 
								// texto cada vez que for compilar meu programa
	
	arquivo << "Olá, mundo!\n"; // Saída de texto para o meu arquivo!

	for(int i = 1; i <=10; i++){
		arquivo << i << std::endl;
	}

	arquivo.close(); // Quando eu acabar de operar o meu arquivo, uso esse comando para liberar memória 
			 // do meu programa

	return 0;
}
