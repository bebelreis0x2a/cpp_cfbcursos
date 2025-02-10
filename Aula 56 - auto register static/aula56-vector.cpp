#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
	
	std::vector<int> vetor{10, 20, 30, 40, 50, 60, 70};

	/* Ao invés de escrever tudo isso:

	for(std::vector<int>::iterator i = vetor.begin(); i != vetor.end(); i++){
		std::cout << *i << std::endl;
	}
	
	Posso fazer assim:
	*/
	
	for(auto i = vetor.begin(); i != vetor.end(); i++){
		std::cout << *i << std::endl;
	}
	
	return 0;
}
