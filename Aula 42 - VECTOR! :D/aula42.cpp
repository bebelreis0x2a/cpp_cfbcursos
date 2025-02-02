#include <iostream>
#include <vector>

int main(){
	
	std::vector <int> vetor; //Não preciso especificar o tamanho do array
				 
	// Se eu não configurar o tamanho do vector, eu NÃO posso inserir valores usando o [], 
	// já que não foi definida a quant. de posições

	for(int i = 0; i < 10; i++){
		vetor.push_back(i);
	}

	std::cout << vetor.size() << "\n\n";

	for(int i = 0; i < vetor.size(); i++){
		std::cout << vetor[i] << std::endl;
	}

	// Criando um vetor com posições definidas:
	std::vector <std::string> palavras(3);

	palavras[0] = "Ornitorrinco";
	palavras[1] = "Onomatopéia";
	palavras[2] = "Ônus";

	std::cout << std::endl;

	for(int i = 0; i < palavras.size(); i++){
		std::cout << palavras[i] << std::endl;
	}

	// Método swap: fazendo a troca de valores de dois vectors
	
	std::vector <int> num1 = {1, 2, 3, 4, 5};
	std::vector <int> num2 = {6, 7, 8, 9, 0};

	std::cout << "num1 antes da troca:  ";
	for(int i = 0; i < num1.size(); i++){
		std::cout << num1[i] << " ";
	}

	num1.swap(num2);

	std::cout << "\nnum1 depois da troca: ";
	for(int i = 0; i < num1.size(); i++){
		std::cout << num1[i] << " ";
	}

	std::cout << "\n\nPrimeiro elemento de num1.: " << num1.front() << std::endl;
	std::cout << "Último elemento de num1...: " << num1.back() << std::endl;
	std::cout << "Elemento do meio de num1..: " << num1.at(num1.size()/2) << std::endl;
	std::cout << "Penúltimo elemento de num1: " << num1[3] << std::endl;

	// Fazendo insert sem o iterator com vector:
	
	num2.insert(num2.begin(), 777); //Adicionar na primeira posição
	num2.insert(num2.begin() + 1, 999); //Para adicionar nas próximas posições, devo ir somando
	num2.insert(num2.end(), 333); //Adicionar na última posição

	std::cout << "Inserindo valores em num2 no início, na próxima posição e no final: " << std::endl;
	for(int i = 0; i < num2.size(); i++){
		std::cout << num2[i] << std::endl;
	}

	//Removendo posições:

	//OBS.: A diferença entre front e beging é que o begin é usado para indicar o primeiro elemento para o iterator!
		
	num2.erase(num2.begin()); //Removo o 777
	num2.erase(num2.begin()); //Como eu já removi o 777, o 999 se torna a 1ª posição, 
				  //logo, apenas coloco para apagar a primeira posição novamente
	num2.erase(num2.end());

	std::cout << "\nRemovendo valores em num2 no início, na próxima posição e no final: " << std::endl;
	for(int i = 0; i < num2.size(); i++){
		std::cout << num2[i] << std::endl;
	}

	//Apagando todos os elementos de num2

	while(!num2.empty()){
		num2.pop_back();
	}

	std::cout << "\nTamanho de num2: " <<num2.size() << std::endl;

	// MATRIZES COM VECTOR
	
	std::vector <std::vector<int>> matriz = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
	int n;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			n = i+1;
			matriz[i][j] = j+n;
		}
	}


	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			std::cout << matriz[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
