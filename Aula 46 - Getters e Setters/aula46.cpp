#include <iostream>
#include "veiculo.h"

int main(){

	Veiculo *carro = new Veiculo(1);

	std::cout << carro->getVelocidadeMax() << std::endl;

	//carro->setVelocidadeMax(300); // Não faz sentido velocidadeMax ser privada mas seu setter ser pública, 
					// o certo é ambos serem privados!

	std::cout << carro->getVelocidadeMax() << std::endl;
	
	std::cout << "Estado do carro por padrão......: " << carro->getLigado() << std::endl;
	
	carro->setLigado(1);

	std::cout << "Estado do carro depois do setter: " << carro->getLigado() << std::endl;

	std::cout << "Nome do veículo.................: " << carro->getNome() << std::endl;

	return 0;
}
