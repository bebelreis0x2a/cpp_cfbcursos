#include <iostream>
#include <vector>

int main(){

	// Se possível, a variável será armazenada em um registrador, e não na memória RAM
	// O registrador está no PROCESSADOR
	
	register int contador; //Devem ter valores pequenos e são acessados mais rapidamente
						
	for(contador = 1; contador <= 10; contador++){
		std::cout << "Teste!" << std::endl;
	}

	// Usando o register + o auto para o iterator:
	
	std::vector<int> v{1, 3, 5 ,7, 9};

	//Lembrando que uso o auto para não precisar escrever std::vector<int>::iterator!
	for(register auto i = v.begin(); i < v.end(); i++){
		std::cout << *i << std::endl;
	}

	return 0;
}

