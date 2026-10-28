#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game (char you, char computer){
	if (you == computer)
		return -1;
	else if (you == 's' && computer == 'p')
		return 1;
	else if (you == 's' && computer == 'r')
		return 0;
	else if (you == 'p' && computer == 'r')
		return 1;
	else if (you == 'p' && computer == 's')



	
}
