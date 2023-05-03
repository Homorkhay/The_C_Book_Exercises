#include <stdio.h>

/*
 * Write a program to print the corresponding celcius
 * to Fahrenheit table
 */

int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;   // lower limit of temp table
	upper = 300; // upper limit of temp table
	step = 20;   // step size

	printf("fahr\tcelcius\n");

	fahr = lower;
	while (fahr <= upper)
	{
		celcius = (5.0) * (fahr-32.0) / 9.0;
		printf("%6.1f\t%6.1f\n", fahr, celcius);
		fahr += step;
	}
	return 0;
}
