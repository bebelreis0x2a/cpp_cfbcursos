#include <iostream>
#include <list>

int main(){
	
	std::list <int> valor; 
	int tamanho = 10;
	std::list<int>::iterator iteracao;

	for (int i = 0; i < tamanho; i++){
		valor.push_front(i);
	}	
	
	iteracao = valor.begin();
	advance(iteracao, 3);
	valor.erase(iteracao);	// Na função, pedi para a iteração mover-se para a posição 3 contando a partir do zero!
				
	tamanho = valor.size();

	for(int i = tamanho; i > 0; i--){
		std::cout << "Valor de i e da lista: " <<i << " - " << valor.front() << '\n';
		valor.pop_front();
		}

	//Limpar uma lista sem usar um for com o pop_front():
	
	for (int i = 0; i < tamanho; i++){
		valor.push_front(i);
	}

	std::cout << "\nTamanho da lista antes do clear(): " << valor.size() << std::endl;
	valor.clear();
	std::cout << "Tamanho da lista depois do clear(): " << valor.size() << std::endl;

	// MÉTODO MERGE: MESCLAGEM DE LISTAS
	std::list <int> lista1; 
	std::list <int> lista2;
	
	lista1.push_front(1);	
	lista1.push_front(1);
	lista1.push_front(1);

	lista2.push_front(3);
	lista2.push_front(3);
	lista2.push_front(3);

	lista1.merge(lista2); //A LISTA2 FICA VAZIA!

	for(int i = 0; i < 6; i++){
		std::cout << lista1.front() << '\n';
		lista1.pop_front();
	}

	return 0;
}
