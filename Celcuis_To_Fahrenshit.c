#include <stdio.h>
/* Celcuis To Farenshit for */

int main () 
{
	int cel, fahrenheit;
	int lower,upper, step;

	lower = 0; /*lower limit of temp scale */
	upper = 200; /* Upper limit*/
	step =	20; /*step size */
	
	cel = lower;
	while (cel <= upper) {
	fahrenheit = 32 + (cel*1.8);
	printf("%3d %6d\n", cel, fahrenheit);
	cel = cel + step;
	}
}
		

