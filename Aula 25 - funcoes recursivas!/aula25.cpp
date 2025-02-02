#include <iostream>

//FUNCTIONS
void contador(int n);
void contador_recursivo(int numero, int contador = 0);
void fatorial (int a, int b = 1);
void fibonacci(int a = 0, int b = 1, int c =0);

int main(){
	contador(10);
	std::cout << "\n\n";	

	contador_recursivo(10);	
	std::cout << "\n\n";	

	fatorial(5);
	std::cout << "\n\n";	

	fibonacci();
	std::cout << "\n\n";	

	return 0;
}

void contador(int n){
	for(int i = 0; i <= n; i++){
		std::cout << i << "\n";
	}
}

//Faremos uma função semelhante da de cima usando recursividade

void contador_recursivo(int numero, int contador){
	std::cout << contador << " ";
	if(numero > contador){ //Aqui, a função chama a si mesma sempre que essa condição for verdadeira, criando um loop 
		contador_recursivo(numero, ++contador); //Temos que incrementar o contador no mesmo momento que a função é chamada
	}
}

void fatorial(int a, int b){
	if(a > 0){	
		fatorial(--a, b*=a); //ou a*fatorial(a-1) (na real, nem eu entendi o que eu fiz aqui, mas deu certo kkkk)
	}else{
		std::cout << b << std::endl;
	}
}

void fibonacci(int a, int b, int c){	
	if(c < 1000){	
		std::cout << c << std::endl;
		a = b;
		b = c; 
		fibonacci(a, b, c = a+b); 
	}
}

