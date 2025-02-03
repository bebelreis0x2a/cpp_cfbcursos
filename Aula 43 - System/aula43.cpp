#include <iostream>
#include <stdlib.h> //Para os comandos do system

int main(){

	system("printf \'\\033[32m\'"); //Alternativa ao color 0a no Linux
	system("ls -all"); 
	getchar(); //Alternativa ao system("pause") no Linux
	return 0;
}
