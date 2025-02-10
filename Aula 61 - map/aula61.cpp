#include <iostream>
#include <map>
#include <utility>

int main(int argc, char *argv[]){

	std::map<int ,std::string> produto;

	// A chave pode ser os ints como eu defini, mas podiam ser letras ou qualquer outro tipo
	//	   [chave] = valor
	produto[10]   = "Mouse";
	produto[20]   = "Teclado";
	produto[30]   = "Monitor";
	produto[40]   = "Gabinete";

	std::cout << "Produto.size(): " << produto.size() << "\n\n";

	//produto.size é igual a 4, então multiplico por 10 para acessar de 10 em 10 no for loop!
	for(int i = 10; i <=  produto.size()*10; i+=10){ // Pulo de 10 em 10 porque o [] acessa a 
													 // chave, e não o índice!
		std::cout << produto[i] << std::endl;
	}

	printf("\n");

	//For com o iterator:

	for(auto i = produto.begin(); i != produto.end(); i++){
		std::cout << i->first << " - " << i->second << std::endl;
	}

	printf("\n");

	// For com base em intervalo

	for(auto i:produto){
		std::cout << i.first << ": " << i.second << std::endl;
	}
	
	// Usando o insert!
	
	std::map<char, std::string> cubos;

	cubos.insert(std::pair<char, std::string>('a', "Rubiks Cube"));
	cubos.insert(std::pair<char, std::string>('b', "Void Cube"));
	cubos.insert(std::pair<char, std::string>('c', "Dino Cube"));
	cubos.insert(std::pair<char, std::string>('d', "Pyramix"));

	printf("\n");

	for(auto i:cubos){
		std::cout << i.first << ": " << i.second << std::endl;
	}
	
	// Método erase - passamos a CHAVE!
		
	cubos.erase('c');

	printf("\n");

	for(auto i:cubos){
		std::cout << i.first << ": " << i.second << std::endl;
	}

	// Apagar todo o meu map
	cubos.clear();

	for(auto i:cubos){
		std::cout << i.first << ": " << i.second << std::endl;
	}

	printf("\n");
	// Método FIND!
	
	std::map<int, std::string> livros;
	std::map<int, std::string>::iterator itmap;

	livros.insert(std::pair<int, std::string>(10, "O Pequeno Príncipe"));
	livros.insert(std::pair<int, std::string>(20, "A Vida Não É Útil"));
	livros.insert(std::pair<int, std::string>(30, "O Manifesto Comunista"));
	livros.insert(std::pair<int, std::string>(40, "O Anticristo"));
	livros.insert(std::pair<int, std::string>(50, "Misto Quente"));

	itmap = livros.find(20); //O meu iterator (que é um ponteiro!) procura a minha CHAVE
							   
	// Se o iterator for igual ao final do meu map, significa que ele não encontrou a chave
	if(itmap == livros.end()){
		std::cout << "Produto não encontrado\n";
	}else{
		std::cout << "Produto em estoque:\n" << itmap->first << ": " << itmap->second << "\n";
	}

	printf("\n");
	// Apagar uma faixa de produto
	
	livros.erase(livros.find(20), livros.find(40));

	std::cout << "Apagando os elementos da chave 20 até a chave 40:\n";

	// Perceba que ele apaga os elementos 20 e 30, o último não é apagado!
	for(auto i:livros){
		std::cout << i.first << ": " << i.second << std::endl;
	}



	return 0;
}

