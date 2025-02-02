#include <iostream>

int main(){
	
	int n1 = 0, n2 = 0;

	std::cout << "Incrementando os valores:" << std::endl
	<< "Valor de n1 = " << n1 << std::endl
	<< "Valor de n2 = " << n2 << std::endl;

	std::cout << "Usei para n1 o pós-incremento (n1++) e para n2 o pré-incremento (++n2)" << std::endl;
	std::cout << n1++ << std::endl; // incrementará o valor de n1 depois que esse linha for executada
	std::cout << ++n2 << std::endl; // incrementa o valor de n2 quando essa linha é executada

	std::cout << "Resultado final" << std::endl << "n1 = " << n1 << "\nn2 = " << n2 << std::endl; 

	return 0;
}
