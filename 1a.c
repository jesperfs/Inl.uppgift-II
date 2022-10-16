#include <stdio.h>

/**************************************************
* Ett program som returnerar differensen av två
* flyttal x och y genom en funktion döpt 
*"subtract" och sedan skriver ut dessa i form av
* "a - b = c".
**************************************************/

/**************************************************
* subtract: funktion som returnerar differensen
*           av två flyttal.
**************************************************/

double subtract(double a, double b)
{
	double c = a - b;

	return c;
}

/**************************************************
* main.c: Här deklarerar vi våra flyttal och
*         anropar funktion subtract samt printar 
*         ut uträkningen.
**************************************************/

int main(void)
{
	double a = 3.4; 
	double b = 6.8;
	double c = subtract(a, b);

	printf("%lg - %lg = %lg", a, b, c);

	return 0;
}
