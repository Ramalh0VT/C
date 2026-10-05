#include <stdio.h>
#include <stdbool.h> 
void main(){
	bool running = true;
	char operator;
	while (running){
		bool break_checker = false;
		double first, second;
		printf("Select a operation: ( +, -, * /) Or Q to leave ");
		scanf("%c", &operator);
		switch(operator){
			case 'Q':
			printf("\n Quitting...");
			running = false;
			break_checker = true;
		}
		if (break_checker == true){
			break;
		}
		printf("Enter two numbers to make the operation:");
		scanf("%lf %lf",&first,&second);
		switch(operator){
			case '+':
				printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
				printf("\n");
				break;

			case '-':
				printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
				printf("\n");
				break;

			case '*':
				printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
				printf("\n");
				break;

			case '/':
				printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
				printf("\n");
				break;
			default:
				printf("Error: no matching operators");
				break;
	}
	}
}
