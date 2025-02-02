#include <iostream>
#include <iomanip> //Para funcionar as funções setw, setfill 
#include <cmath>

int main(){
	
	float a = 42.1234567890;
	float b = 42;

	std::cout.precision(7);	
	std::cout << "Usando o cout..: "  << std::setw(11) << std::setfill('0') << a << std::endl; 
	// Parece que o cout não completa com zeros depois das casas decimais, só antes

	printf("Usando o printf: %011.5f\n",b);

	return 0;
}
