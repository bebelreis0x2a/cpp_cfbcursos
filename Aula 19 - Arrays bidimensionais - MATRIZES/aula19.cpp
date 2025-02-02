#include <iostream>

int main(){

	//	   L  C
	int matriz[3][4]; // O primeiro campo são Linhas, e o segundo são as Colunas

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			if(j % 2 == 0){
				matriz[i][j] = 0;
			}else{
				matriz[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			std::cout << "[" << matriz[i][j] << "]" ;
		}
		std::cout << std::endl;
	}
	return 0;
}
