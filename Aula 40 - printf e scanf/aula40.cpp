#include <iostream>
#include <stdio.h>
#include <math.h>

#define PI M_PI

int main(){
	int a = 100;
	float b = 9.283567;
	char nome[50], paralelepipedo[15], apenas_caixa_alta[50];

	printf("Usando o printf\n");
	
	printf("Valor de a = %d\nValor de b = %f\n\n",a,b);

/*	scanf("%[^\n]",&nome); //Dessa forma, ele irá ler o que vier depois do espaço
	printf("%s\n",nome);

	scanf("%5[^\n]",&paralelepipedo); //Dessa forma, ele irá ler apenas os primeiros 5 caracteres
	printf("%s\n",paralelepipedo);
*/
	// Aparentemente, o scanf com %[^\n] faz com que os outros scanf sejam ignorados, 
	// por isso que comentei os comandos de cima (apesar de funcionarem)

	scanf("%[^a-z^\n]",&apenas_caixa_alta); //Dessa forma, ele irá ler apenas os caracteres MAIUSCULOS 
	printf("%s\n",apenas_caixa_alta);

	printf("\nValor de PI: %f\n", PI);
	printf("Valor de PI com 2 casas decimais: %.2f\n", PI);
	printf("Valor com 11 dígitos completados com zeros à esquerda: %011.2f\n", b); 

	return 0;
}

