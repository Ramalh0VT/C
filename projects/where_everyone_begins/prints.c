#include <stdio.h>
int main(){
	int number = 22;
	float another_number = 2.83;
	char text = "Im trying to make this compile and print properly";
	printf("Value1: %d \n", number);
	printf("Value2: %.2f\n", another_number);
	printf("Value3: %c\n", text);
	return 0;
}
