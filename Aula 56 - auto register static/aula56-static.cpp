#include <iostream>

void sempreRetornaUm();
void ValorVariaACadaChamada();

int main(){
	
	sempreRetornaUm();
	sempreRetornaUm();
	sempreRetornaUm();
	sempreRetornaUm();
	sempreRetornaUm();

	std::cout << std::endl;

	ValorVariaACadaChamada();
	ValorVariaACadaChamada();
	ValorVariaACadaChamada();
	ValorVariaACadaChamada();
	ValorVariaACadaChamada();
	
	return 0;
}

void sempreRetornaUm(){
	auto i = 0;
	std::cout << ++i << std::endl;
}

// O static faz com que a variável seja armazenada no mesmo endereço de memória, atribuindo a
// variável "i" o valor zero apenas quando é criada a variável!

void ValorVariaACadaChamada(){
	static int i;
	std::cout << ++i << std::endl;
}
