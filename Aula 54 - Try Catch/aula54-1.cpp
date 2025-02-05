#include <iostream>

double dividir(double a, double b);

int main(int argc, char *argv[]){

	double valor[2];

	std::cout << "Informe dois valores: " << std::endl;

	std::cin >> valor[0] >> valor[1];

	try{
		std::cout << valor[0] << " % " << valor[1] << " = " << dividir(valor[0], valor[1]) << std::endl;
	}catch(const char *mensagem){ //mensagem é um ponteiro que aponta para a constante throw
		std::cout << mensagem << std::endl;
	}
	
}

// O throw é uma constante de caracteres que são executadas quando eu crio uma exceção através, por exemplo, de um if.
// Basicamente exceções são erros que eu sei que ocorrerão em meu programa, como uma divisão por zero em uma função 
// que divide dois valores.

double dividir(double a, double b){ //Posso ter mais de um throw caso eu tivesse mais exceções 
	if(b == 0){
		throw "Erro: o divisor deve ser diferente de zero!";	
	}
	return a/b;
}
