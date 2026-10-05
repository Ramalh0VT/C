#include <stdio.h>
#include <stdbool.h> 
void main(){
	int count = 0;
	while (true){
		char operator;
		double first, second;
		printf("Select a operation: ( +, -, * /) Or Q to leave: ");
		scanf(" %c", &operator);
		if(operator == '+' || operator == '-' || operator == '*' || operator == '/'){
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
			}
		}
		else if(operator == 'Q'){
			printf("Quitting...");
			break;
		}
		else{
			printf("Invalid operator, try again! \n");
		}
	
	}
}
