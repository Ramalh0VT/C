#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game (char you, char computer){
	if (you == computer)
		return -1;
	if (you == 's' && computer == 'p')
		return 0;
	if (you == 'p' && computer == 's')
		return 1;
	
}
