#include <iostream>

int main(){
	system("clear");	
	// Arrays = vetores
	
	int vetor[5]; 
	//Um vetor inteiro com 5 posições. Começa na posição 0 e vai até o 4.

	for (int i = 0; i < sizeof(vetor)/4; i++){ // SizeOf retorna o tamanho em bytes desse array, portanto, 
						 // temos que dividir essa função pelo o tamanho de bytes de cada tipo!
		vetor[i] = i;
		std::cout << vetor[i] << std::endl;
	}

	int size = 5;
	int vetor2[size];

	getchar();
	system("clear");

	for(int i = 0; i < size; i++){
		vetor2[i] = i*2;
		std::cout << vetor2[i] << std::endl; 
	}

	return 0;
}
