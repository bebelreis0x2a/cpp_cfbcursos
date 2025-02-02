#include <iostream>

int main(){

	char word[6] = "world";
	char print[6] = "-----";
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
	int lifes = 9;
	bool betTrue = false;
	char bet;

	while(lifes > 0){
		system("clear");
		for(int i = 0; i < 7; i++){
			for(int j = 0; j < 6; j++){
				std::cout << hangman[i][j] << " ";
			}
			std::cout << std::endl;
		}

		std::cout << "\n\nLifes: " << lifes << "\n";
		std::cout << "Word: " << print << "\n";
	
		std::cout << "Your guess: ";	
		std::cin >> bet;

		for(int i = 0; i < sizeof(word); i++){
			if(word[i] == bet){
				print[i] = word[i];	
				betTrue = true;
				break;
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

		if(	print[0] == word[0] and  
			print[1] == word[1] and  
			print[2] == word[2] and  
			print[3] == word[3] and  
			print[4] == word[4] and  
			print[5] == word[5]){
			
			break;
		}	
		

		betTrue = false;
	}
	
	system("clear");
	if(lifes == 0){
		std::cout << "You lose :( try again later...\n";
	}else{
		std::cout << "You win! Congratulations :D\n";
	}
	return 0;
}
