#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;	/* lower limit of temp scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	for (fahr = lower; fahr <= upper; fahr += step) {
		celsius = 5.0 * (fahr-32) / 9.0;
		printf("F = %3.0f \tC = %6.1f\n", fahr, celsius);
	}

	return 0;
}

