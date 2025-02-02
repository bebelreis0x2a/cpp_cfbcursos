#include <iostream>

int main(){
	
	int n = 0, m = 1, doWhile = 1;

	system("clear");

	while(n++ < 10){ //Ele PRIMEIRO incrementa o valor de n e DEPOIS faz a comparação
		std::cout << n << std::endl;
	}

	std::cout << "\nTecle ENTER...";
	getchar();
	system("clear");

	while(m){
		std::cout << "Utilização do break - " << m << std::endl;
		if(m++ == 10){ 
			break;
		}
	}

	std::cout << "\nPrograma finalizado...";
	getchar();

	// O do while executa um bloco de comandos dentro do loop pelo menos UMA vez
	while(doWhile != 1){
		std::cout << "Não será executado nem uma vez!\n";
	}

	do{
		std::cout << "doWhile será executado " << doWhile << " vez!\n";
	}while(doWhile != 1);

	return 0;
}
