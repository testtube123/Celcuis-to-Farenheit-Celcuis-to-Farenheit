#include <stdio.h>

/* print Fahrenshit-Celsius table for fahr = 0,20,..., 300 */
/* excuse my use of shit */
int main ()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;	/* Lower limt of temp table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */
	
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf ("%3d %6d\n", fahr, celsius);
		fahr = fahr + step;
		}
	}

