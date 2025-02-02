#include <iostream>

int main(){
	 //Enum representa numerais inteiros

	enum armas{pistola=100, metralhadora, escopeta, fuzil};	//por padrão, o primeiro elemento é igual a 0, 
								//o segundo igual a 1 e assim por diante 
								//(sequencial a partir do valor anterior)

	armas arma_equipada; 	//Basicamente, é como se eu criasse um tipo para elementos. 
				//Pode ser usado para fazer munição de armas para jogos de FPS, por exemplo;
	arma_equipada = metralhadora;

	std::cout << arma_equipada << std::endl;
	return 0;
}
