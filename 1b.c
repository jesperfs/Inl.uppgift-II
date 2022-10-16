#include <stdio.h>

/**************************************************
* Ett program som lagrar differensen av två
* flyttal a och b på addressen till variabel c 
* genom en funktion döpt "subtract" och sedan 
* skriver ut dessa i form av "a - b = c".
**************************************************/

/**************************************************
* subtract: Funktion som lagrar skillnaden mellan
*           a och b på addressen för c.
**************************************************/

void subtract(double a, double b, double* c)
{
	*c = a - b;
	return;
}

/**************************************************
* main.c: Här deklararer vi 3 variabler samt 
*         anropar funktionen subtract för att
*         räkna ut skillnaden.
**************************************************/

int main(void)
{
	double a = 3.4;
	double b = 6.8;
	double c;
	
	subtract(a, b, &c);

	printf("%lg - %lg = %lg", a, b, c);

	return 0;
}
