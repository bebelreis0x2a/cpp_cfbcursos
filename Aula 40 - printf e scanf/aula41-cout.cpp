#include <iostream>
#include <math.h>
#include <iomanip>

int main(){

	int num = 15;

	std::cout << "Valor de num em dec: " << num << std::endl; //Se já não fosse um valor decimal, poderia usar o std::dec
	std::cout << "Valor de num em hex: " << std::hex << num << std::endl;
	std::cout << "Valor de num em oct: " << std::oct << num << std::endl;

	std::cout << "Valor de num em base 16: " << std::oct << std::setbase(16) << num << std::endl; //Posso usar o setbase

	std::cout.precision(5); // O precision irá contar quantos algarismos terá o valor, portanto, 
				// nesse caso, para PI * 10 ter 3 casas decimais,  temos que considerar 
				// os primeiros 2 algarismos antes da vírgula (ou do ponto, nesse caso) 
	std::cout << M_PI * 10<< std::endl;

	std::cout.precision(-1); // Para voltar a minha precisão ao normal
	std::cout << M_PI * 10<< std::endl;
	
	std::cout << "Valor de PI em notação científica: " << std::scientific << M_PI << std::endl;

	// Informando a largura do campo:
	// O setw irá configurar a distância do valor da variável à esquerda, 
	// e o setfill irá configurar com o quê irá preencher esse espaço

	std::cout << "Valor do num.: " << std::setw(10) << std::setfill('0') << std::dec << num << std::endl;

	return 0;
}
