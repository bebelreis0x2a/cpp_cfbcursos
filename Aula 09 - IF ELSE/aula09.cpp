#include <iostream>

using namespace std;

int main(){

	int valor, n = 3, mes = 0, cor;
	int verdadeiro = -1;
	bool falso = false;

	system("clear");

	digitar_de_novo:

	cout << "Insira o valor zero: ";
	cin >> valor;

	if(valor > 0){
		cout << "\nO valor " << valor << " é maior do que zero!\n";
		goto digitar_de_novo;
	}else if(valor == 0){
		cout << "\nO valor " << valor << " é igual a ZERO!\n";
	}else{
		cout << "\nO valor " << valor << " é menor do que zero.\n";
		goto digitar_de_novo;
	}

	if(verdadeiro){ //qualquer valor maior do que 0 dá verdadeiro
		cout << "Verdadeiro!\n";
	}else{
		cout << "Falso!\n";
	}

	if(!falso){
		cout << "VERDADEIRO!\n";
	}

	if (n > 4 and n < 7){
		cout << "\n\n" << "n é > 4 e < 7\n";
	}

	if (n <= 3 or n > 8){
		cout << "\n\n" << "n é <= 3 ou > 8\n";
	}	

	cout << "Digite um valor de 1 a 12: ";
	cin >> mes;

	// Uma forma interessante de usar o operador ternário é usá-lo como condições de retorno, 
	// atribuindo a condição diretamente à variável!
	string mesRespectivo =	(mes == 1)? "Janeiro":
				(mes == 2)? "Feveireiro":
				(mes == 3)? "Março":
				(mes == 4)? "Abril":
				(mes == 5)? "Maio":
				(mes == 6)? "Junho":
				(mes == 7)? "Julho":
				(mes == 8)? "Agosto":
				(mes == 9)? "Setembro":
				(mes == 10)? "Outubro":
				(mes == 11)? "Novembro":
				(mes == 12)? "Dezembro":
				"Esse número não é respectivo a nenhum mês do ano :(";
	
	system("clear");
	cout << "O valor digitado: " << mes << endl << "Respectivo ao mês de: " << mesRespectivo << endl;

	escolher:
	cout << "Insira um número para selecionar uma cor: " << endl << "[1, 2, 3] Vermelho, [4, 5, 6] Verde" << endl;
	cin >> cor;

	cout << "Cor selecionada: ";

	switch(cor){
		case 1:
		case 2:
		case 3:
			cout << "Vermelho\n";
			break;

		case 4:
		case 5:
		case 6:
			cout << "Verde\n";
			break;
		default:
			cout << "Valor inválido. Tome um partido!\n";
			goto escolher;
	}

	// Há como fazer switchs alinhados, veja o final da aula 13 do curso de C++ do canal CFBCursos

	return 0;
}
