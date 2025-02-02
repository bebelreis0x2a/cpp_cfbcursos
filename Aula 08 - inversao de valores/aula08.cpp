#include <iostream>

int main(){

	int n = 10;

	//Formas de inverter o valor da variável n:
	//
	// n = n * -1
	// n *= -1
	// -n --> dessa forma, ele não irá gravar na variável o valor invertido, apenas irá mostrá-lo

	std::cout <<  -n << std::endl;
	std::cout << n << std::endl;

	//outra forma de inverter:
	
	n = -n;
	std::cout << n << std::endl;

	return 0;
}
