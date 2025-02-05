#include <iostream>
#include <vector>

int main(){
	
	std::vector<std::string> produtos={"mouse", "teclado", "monitor", "gabinete", "caixa de som"};

	// Forma convencional de acessar os índices de um vetor:
	for (int i=0; i < produtos.size(); i++){
		std::cout << produtos[i] << std::endl;	
	}

	std::cout << std::endl;	
	
	// Usando um iterator

	std::vector<std::string>::iterator iteracao; // O iterator é um ponteiro!

//	iteracao = produtos.begin(); // Retorno o primeiro elemento do meu vector

	iteracao = produtos.end()-1; // Temos que subtrair 1 porque o produtos.end() retorna a quant. de posições 
				     // que tem no meu vector, e não a última posição em si.
	
	std::cout << *iteracao << std::endl; // É retornado o valor da posição apontada pelo iterator
				  
	// Funções do iterator e de listas: advance, next e prev	

	iteracao = produtos.begin();
	std::advance(iteracao, 2); //Irá avançar 2 posições para frente, e não necessariamente ir para a posição 2, 
			      //mas sim, AVANÇAR
	std::cout << *iteracao << std::endl; 

	std::advance(iteracao, 1);
	std::cout << *iteracao << std::endl; 
	
	std::cout << *next(iteracao, 1) << std::endl; // O next, semelhante ao advance, retorna o valor da posição
						      // à frente informada, mas não avança de fato no array
	
	std::cout << *iteracao << std::endl;

	std::cout << *prev(iteracao, 1) << std::endl; // O prev faz o contrário do next, ele retorna o valor da posição
						      // anterior
       	
	std::cout << *iteracao << std::endl;

	std::cout << std::endl;

	for(iteracao = produtos.begin(); iteracao < produtos.end(); iteracao++){
		std::cout << *iteracao << std::endl;
	}

	std::cout << "\nPosso criar o meu iterator diretamente dentro do for:\n\n";

	for(std::vector<std::string>::iterator it = produtos.begin(); it < produtos.end(); it++){
		std::cout << *it << std::endl;
	}
	return 0;
}
