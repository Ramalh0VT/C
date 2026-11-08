#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char set_computer_value() {		
	srand(time(NULL));
	int n = rand() % 100;

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

void you_won_message_printer(){
	printf("\n\n\t\t\tYou won the game!");
}

void you_lost_message_printer(){
	printf("\n\n\t\t\tYou lost the game!");
}

void draw_message_printer(){
	printf("\n\n\t\t\tGame draw!");
}

void print_result_message(char you) {
	char computer = set_computer_value();
	if (you == computer){
		draw_message_printer();
	}
	else if (you == 's' && computer == 'p'){
		you_won_message_printer();
	}
	else if (you == 's' && computer == 'r'){
		you_lost_message_printer();
	}
	else if (you == 'p' && computer == 'r'){
		you_won_message_printer();
	}
	else if (you == 'p' && computer == 's'){
		you_lost_message_printer();
	}
	else if (you == 'r' && computer == 's'){
		you_won_message_printer();
	}
	else if (you == 'r' && computer == 'p'){
		you_lost_message_printer();
	}
	printf("\n\n\n\n\t\t\tYou chose %c and computer choice: %c\n\n", you, computer);
}

int main(){
	char you, result;

	printf("\n\n\n\n\t\t\tEnter r for ROCK, p for PAPER and s for SCISSORS\n\n\n\n\t\t\t");
	scanf("%c", &you);
	
	print_result_message(you);
}
