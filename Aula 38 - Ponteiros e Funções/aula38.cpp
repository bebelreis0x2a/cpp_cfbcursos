#include <iostream>

void somar(float a, float b);
void somarForaDaFuncao(float *p, float a);
void valores_para_o_vetor(float *v);

int main(){
	
	float valor = 10;
       	float *pointer = &valor;

	somar(valor, 12.3); // A soma é feita apenas dentro da função! O valor da variável 'valor' continuará sendo 10 fora dela
	std::cout << valor << std::endl;

	somarForaDaFuncao(pointer, 12.3); //Poderia usar diretamente o endereço de memória de 'valor' com o símbolo de &
	std::cout << valor << std::endl;

	// Com arrays
	
	float vetor[5];
	valores_para_o_vetor(vetor); // PARA OS VETORES, NÃO USAMOS O & PARA INDICAR O ENDEREÇO DE MEMÓRIA!

	for(int i = 0; i < 5; i++){
		std::cout << vetor[i] << std::endl; // Veja que o valor das posições dos vetores continuam mesmo fora da função!
	}

	return 0;
}

void somar(float a, float b){
	a += b; // A operação é feita em outro endereço de memória!
	std::cout << a << std::endl;
}

void somarForaDaFuncao(float *p, float a){
	*p += a;
}

void valores_para_o_vetor(float *v){
	for(int i = 0; i < 5; i++){
		v[i] = (i+1)*10;
	}
}
