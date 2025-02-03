#include <iostream>
#include "base.h"

int main(){

	Base1 *obj1 = new Base1();
	Base2 *obj2 = new Base2();
	Terceira *obj3 = new Terceira();

	obj1->mostrarBase1();
	obj2->mostrarBase2();

	obj3->mostrarBase1(); //Como obj tem herança das classes do obj1 e do obj2, posso usar as funções dessas classes
	obj3->mostrarBase2();

	return 0;
}
