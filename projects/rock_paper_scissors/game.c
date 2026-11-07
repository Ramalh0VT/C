#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char set_computer_value() {	
	
	srand(time(NULL));
	n = rand() % 100;

	if (n < 33){
		return 's';
	}
	else if (n > 33 && n < 66){
		return 'p';
	}
	else{
		return 'r';
	}
}

int game(char you, char computer) {
	if (you == computer){
		return -1;
	}
	else if (you == 's' && computer == 'p'){
		return 1;
	}
	else if (you == 's' && computer == 'r'){
		return 0;
	}
	else if (you == 'p' && computer == 'r'){
		return 1;
	}
	else if (you == 'p' && computer == 's'){
		return 0;
	}
	else if (you == 'r' && computer == 's'){
		return 1;
	}
	else if (you == 'r' && computer == 'p'){
		return 0;
	}
}

int main(){
	char you, computer, result;
	
	computer = set_computer_value;
	
	printf("\n\n\n\n\t\t\tEnter r for ROCK, p for PAPER and s for SCISSORS")
	scanf("%c", &you);

	you_and_computer = 
}
