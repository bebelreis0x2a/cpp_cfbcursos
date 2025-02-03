#include <iostream>
#include "veiculo.h"

int main(){
	
	Moto *moto = new Moto();
	Carro *carro = new Carro();
	Tanque *tanque = new Tanque();

	moto->mostrar();
	carro->mostrar();
	tanque->mostrar();

	return 0;
}
