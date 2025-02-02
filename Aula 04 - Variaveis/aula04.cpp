#include <iostream>

//Declarações globais ocorrem fora das funções

#define pi 3.14159
#define texto std::cout << "Mostrando um texto usando define\n";

int main(){

	int vidas, xp = 8, hp = 100; //valores inteiros --> posso declarar várias variáveis de mesmo tipo usando uma só linha
	char letra = 'a'; // 1 byte --> uma letra entre 'aspas simples'
	double decimal = 2.499999; //precisao maior
	float decimal2 = 2.499999; //precisao menor, por ex.: o valor 2.49999 eh convertido para 2.5
	bool logico = true; //verdadeiro (true = 1) ou falso (false = 0)
	std::string nome; //um tipo que recebe palavras e textos (mais de um caractere) entre "aspas duplas"

	std::cout << "Vidas quando a avariável vidas é inicializada sem um valor: " << vidas << "\n";
	std::cout << "Nome quando a variável string é inicializada sem um valor: " << nome << "\n";

	std::cout << "Digite um nome: ";
	std::cin >> nome;

	std::cout << vidas << std::endl 
	<< letra 	<< std::endl
	<< decimal 	<< std::endl
	<< decimal2 	<< std::endl
	<< logico 	<< std::endl
	<< nome 	<< std::endl
	<< pi		<< std::endl;
	texto

	return 0;
}
