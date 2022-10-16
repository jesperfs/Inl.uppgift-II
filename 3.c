#include <stdio.h>

/********************************************************************************
* Main.c: Ett program där tre flyttalsvariabler voltage, current samt resistance 
*         deklareras i funktionen main. Tilldelas sedan nya värden genom 
*         funktionen electrical_set och funktionen electrical_print skriver 
*         ut dessa.
********************************************************************************/


/********************************************************************************
* electrical_set: Tilldelar nya värden till variablerna voltage, current och
*                 resistance och lagrar dessa på dess addresser.
********************************************************************************/

static inline void electrical_set(double *x, 
                                  double *y, 
                                  double *z)
{
	*x = 3.4;
	*y = 6.8;
	*z = 3.4/6.8;

	return;
}

/********************************************************************************
* electrical_print: Skriver ut värdena för variablerna voltage, current och 
*                   resistance samt anger dess enhet.
********************************************************************************/

static inline void electrical_print(double voltage, 
                                    double current, 
                                    double resistance)
{
	printf("-------------------------------------------------------------------------------------------------------\n");
	printf("Voltage: %lg V\n", voltage);
	printf("Current: %lg mA\n", current);
	printf("Resistance: %lg kOhm\n", resistance);
	printf("-------------------------------------------------------------------------------------------------------\n");

	return;
}

/********************************************************************************
* main: Här deklareras variablerna voltage, current samt resistance och vi
*       anropar funktionerna electrical_set samt electrical_print.
********************************************************************************/

int main(void)
{
	double voltage = 0;
	double current = 0;
	double resistance = 0;

	electrical_set(&voltage, &current, &resistance);

	electrical_print(voltage, current, resistance);

	return 0;
}
