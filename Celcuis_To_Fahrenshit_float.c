#include <stdio.h>
/* Celcuis To Farenshit floating point version */

int main () 
{
	float cel, fahrenheit;
	int lower,upper, step;

	lower = 0; /*lower limit of temp scale */
	upper = 200; /* Upper limit*/
	step =	20; /*step size */
	
	cel = lower;
	while (cel <= upper) {
	fahrenheit = 32.0 + (cel *1.8);
	printf("%3.0f %6.1f\n", cel, fahrenheit);
	cel = cel + step;
	}
}
		

