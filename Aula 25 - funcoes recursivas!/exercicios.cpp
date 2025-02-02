#include <iostream>

//AS FUNÇÕES RECURSIVAS CONSOMEM MAIS MEMÓRIA, MAS SÃO MAIS EFICIENTES E MAIS SIMPLES DE SE ESCREVER

int fatorial(int a){
	if (a == 1 or a == 0){
		return 1;
	}
	else{
		return a * fatorial(a-1);
	}
}
//ex.: 1º valor de fibonacci = 0; 10º da sequência de fibonacci = 34
int fibonacci(int a){
	
	if(a == 1){
		return 0;
	}else if(a == 2){
		return 1;
	}

	//Esses dois primeiros casos de cima são os casos-base, são a partir deles que conseguimos, por exemplo,
	//o fibonacci de 3, que é o caso 1 (a == 1)  somado com o caso caso 2 (a == 2), já que a função retorna
	//a soma de a-1 e de a-2

	else{
		return fibonacci(a-1) + fibonacci(a-2);
	}
}

int main(){

	int fat = fatorial(4);
	std::cout << fat << std::endl;

	int fib = fibonacci(10);
	std::cout << fib << std::endl;
	
	return 0;
}
