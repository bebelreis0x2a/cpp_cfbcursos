#include <iostream>

int n1 = 10, n2 =20;
float globalValue = 42;


using namespace std;

int main(){

	int n1 = 100, n2 = 200;
	float operacao_matematica;
	float resto_divisao;

	cout << n1 << endl << n2 << endl; // VARIÁVEIS LOCAIS TÊM PRIORIDADE DAS VARIÁVEIS GLOBAIS
	cout << globalValue << endl;

	operacao_matematica = (n1 + n2)/globalValue*n1; //globalValue tem que ser float porque como a divisão dá um número real, 
							//a divisão tem que ocorrer com um valor real também
	resto_divisao = n2 % n1;

	cout << operacao_matematica << endl << resto_divisao << endl;

	return 0;
}
