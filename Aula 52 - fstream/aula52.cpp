#include <iostream>
#include <fstream>
#include <cstdlib> // Uma versão melhorada do stdlib

int main(){
	
	std::fstream arquivo; // Agora, com o mesmo objeto eu posso dar entradas e obter saídas no meu arquivo
	std::string nome, linha;
	char opcao = 's';

	arquivo.open("arquivo.txt",std::ios::out | std::ios::app); // O app fará que não seja apagado quando do arquivo
								   // os nomes anteriores. o '|' faz com que tanto o 
								   // ios::out quanto o ios::app sejam executados sejam
								   // executados ao mesmo tempo

	while((opcao == 's') or (opcao == 'S')){
		system("clear");
		std::cout << "Digite um nome: ";
		std::cin >> nome;
		arquivo << nome << std::endl;
		std::cout << "Deseja digitar mais um nome? [s/n] ";
		std::cin >> opcao;
	}
	arquivo.close();

	arquivo.open("arquivo.txt", std::ios::in);

	std::cout << "Nomes digitados:" << std::endl;

	if(arquivo.is_open()){
		system("clear");
		while(std::getline(arquivo, linha)){
			std::cout << linha << std::endl;
		}
		arquivo.close();
	}else{
		std::cout << "Não foi possível abrir o arquivo!\n";
	}

	return 0;
}
