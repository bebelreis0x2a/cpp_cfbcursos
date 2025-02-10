#include <iostream>

int soma(int a, int b);
auto multiplicar(double a, double b)->double;
std::string nome();

int main(int argc, char *argv[]){
	
	// Dessa forma, não preciso obrigatoriamente informar o tipo da variável
	
	auto valor = 10; // A variável DEVE ser inicializada quando usado o auto!

	// valor = "Fulano" // operação inválida! Não posso mudar o tipo da variável

	auto resposta = soma(10, 5);
	auto meu_nome = nome(); // O tipo da variável será o tipo do retorno da função!

	auto produto = multiplicar(3.3, 2.2);

	std::cout << valor << std::endl;
	std::cout << resposta << std::endl;
	std::cout << meu_nome << std::endl;
	std::cout << produto << std::endl;

	return 0;
}

int soma(int a, int b){
	return a+b;
}

// Como todo auto precisa ser inicializado, indico que o return será do tipo double com a seta
auto multiplicar(double a, double b)->double{
	return a*b;
}

std::string nome(){
	return "Bebel";
}


