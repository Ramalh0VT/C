#include <stdio.h>
#include <stdbool.h> 
void main(){
	bool running = true;
	while (running){
		char operator;
		double first, second;
		printf("Select a operation: ( +, -, * /) Or Q to leave ");
		scanf("%c", &operator);
		switch(operator){
			case 'Q':
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
			case 'Q':
				running = false;
				printf("Quitting... \n");
				break;
			default:
				printf("Error: no matching operators");
				break;
	}
	}
}
