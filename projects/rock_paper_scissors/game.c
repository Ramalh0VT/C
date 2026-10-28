#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer){
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
	int n;
	char you, computer, result;
	
	srand(time(NULL));
	n = rand() % 100;

	if (n < 33){
		computer = 's';
	}
	else if (n > 33 && n < 66){
		computer = 'p';
	}
	else{
		computer = 'r';
	}

	srand(time(NULL));
	n = rand() % 100;

	if (n < 33){
		you = 's';
	}
	else if (n > 33 && n < 66){
		you = 'p';
	}
	else{
		you = 'r';
	}


}
