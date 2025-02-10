#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
	
	std::vector<std::string> vetor{"Yasmin", "Haru", "Tainá", "Pepê", "Bebel"};

	// Uma forma de varrer vetores, matrizes, listas etc...
	
	// Usamos auto porque tanto o vetor, quanto o iterador devem ser do mesmo tipo
	for(auto i:vetor){
		std::cout << i << std::endl;
	}

	// Usando o for-range-declaration com um vetor simples
	
	int x[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	// Posso usar tanto o tipo diretamente, quanto o auto
	for(int i:x){
		std::cout << i << std::endl;
	}

	// EXTRA: Forma mais atual de criar strings

	// Usamos como ponteiro para usarmos a alocação dinâmica	
	const char *nome = "Bebel"; // O mesmo que std::string nome = "Bebel"
								
	//Pode-se usar também: const char nome[] = "Bebel";
	
	std::cout << nome << std::endl;

	return 0;
}
