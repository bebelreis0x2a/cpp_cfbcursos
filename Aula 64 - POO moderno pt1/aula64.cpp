#include <iostream>
#include <memory>

class Carro{
	public:
		int velMax, potencia;
		const char* nome;

		Carro(const char* _nome, int _potencia){
			this->nome = _nome; 			
			this->potencia = _potencia;

			if(_potencia >= 300){
				this->velMax = 300;
			}else{
				this->velMax = 200;
			}
		}
};

class Moto{
	public:
		int velMax, potencia;
		const char* nome;

		Moto(const char* _nome, int _potencia):nome(_nome), potencia(_potencia){ //Lista de inicialização
			if(_potencia >= 300){
				velMax = 300; // Em C++ moderno, não é necessário usar o this->
			}else{
				velMax = 200;
			}
		}
};
int main(int argc, char *argv[]){

	// Agora, veremos POO moderno em C++

	//Maneira antiga de criação e liberação do espaço alocado:
	Carro *c1 = new Carro("Fusca", 150);
	std::cout << c1->nome 	  << "\n"
			  << c1->potencia << "\n"
			  << c1->velMax   << "\n";
	delete c1;

	printf("\n");
	// Agora criando objetos da forma moderna
	
	Moto moto{"Suzuki", 70}; // Não preciso usar o delete
	std::cout << moto.nome 	   << "\n" // Não preciso usar o this->
		  	  << moto.potencia << "\n"
		  	  << moto.velMax   << "\n";

	printf("\n");

	// Usando Smart Pointers
	std::unique_ptr<Moto> moto2(new Moto{"MX250", 250}); 	
	std::cout << moto2->nome 	 << "\n"
			  << moto2->potencia << "\n"
			  << moto2->velMax   << "\n";

	return 0;
}
