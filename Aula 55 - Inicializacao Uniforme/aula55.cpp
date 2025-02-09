#include <iostream>
#include <vector>
#include <map>

struct Pessoa{
	std::string nome;
	int idade;
};

class Veiculo{
	public:
		int rodas;
		std::string nome;
		
		//Não preciso fazer um construtor, pois posso definir esses valores de forma uniforme!
};

int main(int argc, char *argv[]){
	
	// Antigamente era assim:

	int valor = 10;

	// Agora, podemos fazer atribuições usando CHAVES
	
	int numero{10};
	std::string nome{"Bebel"};
	std::vector<int> valores{10, 20, 30, 42, 50};
	std::map<std::string, std::string> capitais{{"MG", "Guapé"}, {"SP", "São Paulo"}};

	for(std::vector<int>::iterator i = valores.begin(); i < valores.end(); i++){
		std::cout << *i << std::endl;
	}

	for(std::map<std::string, std::string>::iterator i = capitais.begin(); 
			i != capitais.end(); 
			i++){
		std::cout << i->first << ", " << i->second << std::endl;
	}

	// Antigamente:
	
	Pessoa *fulano = new Pessoa();
	fulano->nome = "Fulano";
	fulano->idade = 69;

	// E agora:

	Pessoa eu{"Bebel", 18};

	std::cout << valor << " " << numero << std::endl; 
	std::cout << nome << " " << valores[0] << std::endl; 
	
	std::cout << "Antes.: " << fulano->nome << ", " << fulano->idade << std::endl;
	std::cout << "Depois: " << eu.nome << ", " << eu.idade << std::endl;

	Veiculo carro{4, "Fusca"};

	std::cout << carro.rodas << ", " << carro.nome << std::endl;

	// Olha essa magia!
	
	int	vetor[]{33, 55, 77, 99};

	std::cout << vetor[3] << std::endl;

	return 0;
}
