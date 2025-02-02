#include <iostream>

int main(){

	// PONTEIROS: Um ponteiro armazena o endereço de  memória de outra variável
	// Na declaração de um ponteiro, usamos *
	
	int num = 10;
	int *pn; // O ponteiro tem que ser do mesmo tipo da variável que ele aponta porque 
		 // cada tipo tem um tamanho de bytes específico (ex.: int tem 4 bytes)

	pn = &num; // O & indica o endereço de memória de num, que está sendo atribuída ao ponteiro pn

	std::cout << "End. de memória de num: " <<  pn << std::endl; //Mostro o endereço de memória da variável num
	std::cout << "Valor de num..........: " << *pn << std::endl; //Mostro o valor da variável num 
	//(leia o '*' como "o conteúdo do endereço apontado pelo o ponteiro")

	/* Vantagem do ponteiro: acessando o endereço de uma variável através de um ponteiro, mesmo que ela esteja
	 * dentro de uma estrutura distante (algo como uma variável dentro de uma função de um struct), eu consigo 
	 * manipular seu valor DIRETAMENTE
	 */

	// Modificando o valor da variável através do meu ponteiro:

	*pn = 20; //No endereço APONTADO (*) por pn, altere o valor para 20
	std::cout << "Valor de num..........: " << *pn << std::endl; //Mostro o valor da variável num
	
	return 0;
}
