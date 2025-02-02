#include <iostream>

int main(){

	int *pvetor;
	int vetor[10];
	
	pvetor = &vetor[0]; // Dessa forma simples, atribuo ao ponteiro o endereço de memória do primeiro elemento do vetor
			    // Também posso fazer: pvetor = vetor, simplesmente.	
	std::cout << pvetor << std::endl;

	*(++pvetor); // o mesmo que pvetor = &vetor[1];
	std::cout << pvetor << std::endl; //Perceba que na tela, o próximo endereço de memória está à 
					  //4 bytes na frente do anterior, pois o tipo é inteiro!

	// Mudando o valor de uma posição do vetor usando ponteiros
	
	pvetor = &vetor[0];
	*pvetor = 42;

	std::cout << vetor[0] << std::endl;	

	return 0;
}
