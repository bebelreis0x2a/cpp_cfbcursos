#ifndef BASE_H
#define BASE_H

class Base1{
	public:
		void mostrarBase1();
};

void Base1::mostrarBase1(){
	std::cout << "Minha base 1.\n";
}

class Base2{
	public:
		void mostrarBase2();
};

void Base2::mostrarBase2(){
	std::cout << "Minha base 2!\n";
}

class Terceira:public Base1, public Base2{ //Dessa forma, essa classe Terceira irá herdar 
					   //características das duas classes de cima

};
#endif
