#include <iostream>
#include <fstream>

int main(){

	std::ofstream arquivoSaida;

	arquivoSaida.open("input-output.txt");

	arquivoSaida << "Texto a ser imprimido!" << std::endl;

	arquivoSaida.close();

	std::ifstream arquivoEntrada;
	std::string linha;

	arquivoEntrada.open("input-output.txt");

	if(arquivoEntrada.is_open()){ // Se o arquivo estiver aberto
		while(std::getline(arquivoEntrada, linha)){ //Enquanto haver texto dentro do meu arquivo

			std::cout << linha << std::endl; // No caso, ele imprime TUDO o que houver no arquivo,
							 // inclusive o que mandei por no arquivo com o arquivoSaida
		}
		arquivoEntrada.close();
	}else{
		std::cout << "Não foi possível acessar o arquivo!" << std::endl; // Se o arquivo existir mas estiver vazio
										 // ele imprime vazio
	}

	return 0;
}
