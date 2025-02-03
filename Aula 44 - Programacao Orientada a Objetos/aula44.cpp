#include <iostream>
#include "cuboMagico.h"

class Aviao{ //Classes em Pascal Camel Case!

	public: //todos os elementos públicos
		int velocidade = 0, velocidadeMax;
		std::string tipo;

		void tipoAviao(int t); //criação de um método: precisamos prototipá-la
		void mostrar();

	private: //todos os elementos privados	
};

void Aviao::tipoAviao(int t){ //Para prototipar a minha função, indico qual é a classe e a função usando '::'
	if(t == 1){
		this->velocidadeMax = 800;
		this->tipo = "Jato";
	}else if(t == 2){
		this->velocidadeMax = 350;
		this->tipo = "Monomotor";
	}else{
		this->velocidadeMax = 180;
		this->tipo = "Planador";

	}
}

void Aviao::mostrar(){
	std::cout << "Velocidade.: " << this->velocidade << std::endl;
	std::cout << "Vel. Máxima: " << this->velocidadeMax << std::endl;
	std::cout << "Tipo.......: " <<  this->tipo << "\n\n";
}

int main(){

	Aviao *quatorze_bis = new Aviao(); // Um objeto é declarado como um ponteiro! Como a alocação na memória é dinâmica 
					   // (não sei quanto irei precisar de memória), precisamos usar ponteiros!
	quatorze_bis->tipoAviao(3); // Usamos a seta ao invés de '.', mas é a mesma coisa!
	quatorze_bis->mostrar(); 
	
	Aviao *learjet = new Aviao();
	learjet->tipoAviao(1);
	learjet->mostrar();

	CuboMagico *triangulo = new CuboMagico("piramix", 3);
	triangulo->mostrar();

	return 0;
}
