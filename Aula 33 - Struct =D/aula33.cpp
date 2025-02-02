#include <iostream>

//Struct é uma estrutura para criação de objetos com todas as propriedades públicas

struct Carro{ //Structs e classes começam com letra Maiúscula

	std::string nome, cor;
	int potencia, velocidade;
};

struct Personagem{ 

	std::string nome, classe;
	int vida, poder, altura, velocidade;

	void inserir(std::string _nome, std::string _classe, int _vida, int _poder, int _altura){
		nome = _nome;
		classe = _classe;
		vida = _vida;
		poder = _poder;
		altura = _altura;
		velocidade = 0;
	}

	void mostrar(){
		std::cout << "\n\nInformações do personagem: " << std::endl;
		std::cout << "Nome......: " << nome	   << std::endl;
		std::cout << "Classe....: " << classe      << std::endl;
		std::cout << "Vida......: " << vida 	   << std::endl;
		std::cout << "Poder.....: " << poder	   << std::endl;
		std::cout << "Altura....: " << altura      << std::endl;
		std::cout << "Velocidade: " << velocidade  << std::endl;
	}

	void mudarVelocidade(int _velocidade){
		if(_velocidade > 200){
			velocidade = 200;
		}
		else if(_velocidade < 0){
			velocidade = 0;
		}
		else{
			velocidade = _velocidade;
		}
	}

};

int main(){
	Carro fusca;

	fusca.nome 	 = "Fusca da Discórdia";
	fusca.cor 	 = "Azul claro";
	fusca.potencia	 = 100;
	fusca.velocidade = 200;

	std::cout << "Informações do carro: " << std::endl;
	std::cout << "Nome.......: " << fusca.nome << std::endl;
	std::cout << "Cor........: "<< fusca.cor << std::endl;
	std::cout << "Potência...: " << fusca.potencia << std::endl;
	std::cout << "Vel. Máxima: " << fusca.velocidade << std::endl;

	Personagem player;

	player.inserir("Gordon Freeman", "Humano", 100, 0, 170);
	player.mostrar();
	player.mudarVelocidade(30000);
	player.mostrar();

	Personagem *npcs = new Personagem[5]; // Iremos ver ponteiros posteriormente
	Personagem npc1, npc2, npc3, npc4, npc5;

	npcs[0] = npc1; //Fazendo dessa forma, consigo usar um laço for para usar funções do meu struct, 
			//porque cada posição do meu array é um objeto diferente!
	npcs[1] = npc2;
	npcs[2] = npc3;
	npcs[3] = npc4;
	npcs[4] = npc5;

	npcs[0].inserir("Cientista", "Humano", 100, 0, 160);
	npcs[1].inserir("G-Man", "Indefinido", 200, 200, 170);
	npcs[2].inserir("Guarda", "Humano", 165, 0, 190);
	npcs[3].inserir("Zombie", "Zumbi", 50, 100, 170);
	npcs[4].inserir("Headcrab", "Mob", 50, 100, 50);

	for(int i = 0; i < 5; i++){
		npcs[i].mostrar();
	}

	return 0;
}
