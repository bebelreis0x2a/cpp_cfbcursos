#include <iostream>

//FUNÇÕES
void texto(); //Estou prototipando a função caso ela fosse criada depois do main
void soma(int a, int b);
void soma();
int retorna_o_resto(int a, int b);
void leitura(std::string a[]);
void impressao(std::string txt="Nada informado."); //Caso não seja passado nenhum parâmetro, o txt padrão será "Nada informado."

int main(){	
	
	//VARIÁVEIS
	int valor1, valor2, resultado;
	
	system("clear");
	
	std::string livros[4]  {"O Hobbit", "O Pequeno Principe", "Diário de um Banana", "O Manifesto Comunista"};
	texto();
	
	impressao();
	impressao("Bebel");

	leitura(livros);

	std::cout << "Digite dois valores: ";
	std::cin >> valor1 >> valor2;

	resultado = retorna_o_resto(valor1, valor2);
	std::cout << valor1 << " dividido por " << valor2 << " tem como resto " <<resultado << std::endl;
	soma(valor1, valor2);	
	soma();

	return 0;
}

void texto(){ 
	// declarando a função aqui embaixo e prototipando ela em cima, deixa o código
	// mais organizado caso tenha muitas funções
	std::cout << "\nOlá, mundo!\n\n";
}

void soma(int a, int b){
	std::cout<<"Soma dos valores: " << a+b << "\n";
}
//SOBRECARGA DE FUNÇÕES: posso criar duas funçoes com o mesmo nome, mas devem ter argumentos diferentes
void soma(){
	int c = 30, d = 50;
	std::cout<< c << " + " << d << " = " << c+d  << "\n";
}

int retorna_o_resto(int a, int b){
	return a%b;
}

void leitura(std::string a[]){
	for(int i = 0; i < 4; i++){
		std::cout << a[i] << "\n";
	}
	std::cout << std::endl;	
}

void impressao(std::string txt){ //Caso não seja passado nenhum parâmetro, o txt padrão será "Nada informado."
	std::cout << "\n" << txt << "\n\n";
}
