#include <stdio.h>

/* print Fahrenshit-Celsius table for fahr = 0,20,..., 300 floating point version */ 
/* excuse my use of shit */
int main ()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;	/* Lower limt of temp table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */
	
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf ("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
		}
	}

