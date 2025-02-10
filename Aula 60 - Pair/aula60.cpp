#include <iostream>
#include <vector>
#include <utility> //Para usar o pair

int main(int argc, char *argv[]){

	std::pair <int, std::string> meu_par(10, "Bebel");

	std::cout << meu_par.first << " - " << meu_par.second << std::endl;
	
	meu_par.first = 100;
	meu_par.second = "Bob";

	std::cout << meu_par.first << " - " << meu_par.second << std::endl;

//	Trabalhando pares com vetores:

	int tamanho = 3;

	std::pair <int, std::string> cores[tamanho];

	cores[0].first = 10;
	cores[0].second = "Azul";

	cores[1].first = 20;
	cores[1].second = "Branco";

	cores[2].first = 30;
	cores[2].second = "Cinza";

	for (auto i:cores){
		std::cout << i.first << " - " << i.second << std::endl;
	}

	// Usando o make pair:
	
	std::pair<int, std::string> objetos[tamanho];

	objetos[0] = std::make_pair(1, "Anel");
	objetos[1] = std::make_pair(2, "Bola");
	objetos[2] = std::make_pair(3, "Cesta");

	for(int i = 0; i < tamanho; i++){
		std::cout << objetos[i].first << " - " << objetos[i].second << std::endl;
	}

	// Um pair dentro de um outro pair

	std::pair<int, std::pair<std::string, double>> produtos[tamanho];

	produtos[0] = std::make_pair(10, std::make_pair("Mouse", 20.50));
	produtos[1] = std::make_pair(20, std::make_pair("Teclado", 100.25));
	produtos[2] = std::make_pair(30, std::make_pair("Monitor", 300.75));

	for(int i = 0; i < tamanho; i++){
		std::cout << produtos[i].first << " - " 
				  << produtos[i].second.first << " - "
				  << produtos[i].second.second 
				  << std::endl;
	}

	std::vector<std::pair<int, std::string>> cubos;

	cubos.push_back(std::make_pair(10, "Rubik's Cube"));
	cubos.push_back(std::make_pair(20, "Dino Cube"));
	cubos.push_back(std::make_pair(30, "Pyramix"));

	for(int i = 0; i < cubos.size(); i++){
		std::cout << cubos[i].first << " - " << cubos[i].second << std::endl;
	}

	return 0;
}
