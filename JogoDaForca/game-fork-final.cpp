#include <iostream>

int main(){

	char word[30];
	char print[30];
	char hangman[7][6] 
	{
		{'|', '-', '-', '-', ' '},
		{'|', ' ', ' ', '|', ' '},
		{'|', ' ', ' ', ' ', ' '},
		{'|', ' ', ' ', ' ', ' '},
		{'|', ' ', ' ', ' ', ' '},
		{'|', ' ', ' ', ' ', ' '},
		{'|', ' ', ' ', ' ', ' '}
	};
	int lifes = 9, tam = 0, count = 0;
	bool betTrue = false;
	char bet;

	std::cout << "Enter the secret word: ";
	std::cin >> word;

	for(int i = 0; i < 30; i++){
		if(word[i] != '\0'){
			tam++;
		}else{
			break;
		}
	}

	for(int i = 0; i < tam; i++){
		print[i] = '-';
	}

	while(lifes > 0){
		count = 0;
		system("clear");
		for(int i = 0; i < 7; i++){
			for(int j = 0; j < 6; j++){
				std::cout << hangman[i][j] << " ";
			}
			std::cout << std::endl;
		}

		std::cout << "\n\nLives: " << lifes << "\n";
		std::cout << "Word: ";
	
		for(int i = 0; i < tam; i++){
			std::cout << print[i];
		}

		std::cout << std::endl;
		std::cout << "Your guess: ";	
		std::cin >> bet;

		for(int i = 0; i < tam; i++){
			if(word[i] == bet){
				print[i] = word[i];	
				betTrue = true;
			}
		}	

		if(!betTrue){
			lifes--;
			if (lifes == 8) hangman[2][3] = 'o';		
			if (lifes == 7)	hangman[3][3] = '|';
			if (lifes == 6)	hangman[4][3] = '|';
			if (lifes == 5)	hangman[5][3] = '|';
			if (lifes == 4)	hangman[3][2] = '/';
			if (lifes == 3)	hangman[3][4] = '\\';
			if (lifes == 2)	hangman[6][2] = '/';
			if (lifes == 1)	hangman[6][4] = '\\';
			
		}
	
		for(int i = 0; i < tam; i++){
			if(print[i] == word[i]){
				count++;
			}
			else{
				break;
			}
		}

		if(count == tam){
			break;
		}

		betTrue = false;
	}
	
	system("clear");
	if(lifes == 0){
		std::cout << " ⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣀⣀⣀⡀⢀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣷⡀⢿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⡿⠿⠿⠿⠿⢿⣿⣧⠈⢿⣿⣿⡄⠀⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣤⣤⣤⣤⣤⣼⣿⣿⣧⠈⢿⣿⣿⡄⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣦⣤⣤⣤⣤⣼⣿⣿⣿⡇⢈⣉⣉⣉⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⢸⣿⣿⡏⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⣿⣿⣿⠃⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢰⣿⣿⡟⠀⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⣼⣿⣿⠇⠀⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⢀⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢸⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⠃⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⡿⠀⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⡇⢸⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀\n"
			  << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⠛⠛⠛⠛⠛⠀⠘⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
		std::cout << "You lose :( try again later...\n";
	}else{
		std::cout << "You win! Congratulations :D\n";
	}
	return 0;
}
