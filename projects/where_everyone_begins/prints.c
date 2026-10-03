#include <stdio.h>
#include <stdlib.h>
int main(){
	int number = 22;
	float another_number = 2.83;
	char *text = malloc(5);
	text[0] = 'w';
	text[1] = 'h';
	text[2] = 'a';
	text[3] = 't';
	text[4] = '\0';
	printf("Value1: %d \n", number);
	printf("Value2: %.2f \n", another_number);
	printf("Value3: %s \n", text);
	free(number);
	free(another_number);
	free(text);
	return 0;
}
