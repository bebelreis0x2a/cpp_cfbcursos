#include <iostream>
#include <vector>
#include <stdexcept> //Para tratar os erros

int main(int argc, char *argv[]){

	std::vector<int> numero(5);

	try{ // Nesse bloco, iremos escrever o nosso código passível de ocorrer um erro

		numero.at(0) = 10; // O mesmo que numero[0] = 10
		std::cout << numero[0] << std::endl;

		numero.at(5) = 1000; // O programa retorna um erro quando fora do try catch, porque nosso array não
				       // tem sua alocação dinâmica e seu tamanho é de 5 posições (de 0 a 4)
		std::cout << numero[5] << std::endl;


	}catch(std::exception &erro){ // Caso haja um erro, este será tratado nesse bloco. Para isso, é preciso 
				      // de um parâmetro que receberá o endereço da memória de onde está ocorrendo o erro

		std::cout << "Erro: o tamanho do vetor foi ultrapassado!" << std::endl;
		std::cout << erro.what() << std::endl; //Retorna o que deu de errado
	}

	return 0;
}
