#include <stdio.h>

/********************************************************************************
* main: program som deklarerar en statisk array och sorterar samt printar ut den
*       i fallande/stigande ordning.
********************************************************************************/

// Koden till uppgift A:

int main(void)
{
	double data[] = { 7, 0.5, 2, 0.3, 0.1, 0.0, -10, 528.2, 8.0, 7.2, 2.3, 1100, 222 };

	int size = 13;

	for (int i = 0; i < size; i++)
	{
		for (int f = 0; f < (size - 1); f++)
		{
			if (data[f] > data[f + 1])
			{
				double temp1 = data[f];
				data[f] = data[f + 1];
				data[f + 1] = temp1;
			}
		}
	}

	for (int i = 0; i < size; i++)

		printf("data[%d] = %lg\n", i, data[i]);

	return 0;
}

/********************************************************************************
* Uppgift B: Utskriften blir som nedan:
* data[0] = -10
* data[1] = 0
* data[2] = 0.1
* data[3] = 0.3
* data[4] = 0.5
* data[5] = 2
* data[6] = 2.3
* data[7] = 7
* data[8] = 7.2
* data[9] = 8
* data[10] = 222
* data[11] = 528.2
* data[12] = 1100
********************************************************************************/

/********************************************************************************
* Uppgift C: För att få programmet att sortera och skriva ut i fallande ordning
             behöver vi bara ändra på koden "if(data[f] > data[f + 1])", 
			 där > blir till <.
********************************************************************************/

/********************************************************************************
* Uppgift D: Utskriften blir nu istället:
* data[0] = 1100
* data[1] = 528.2
* data[2] = 222
* data[3] = 8
* data[4] = 7.2
* data[5] = 7
* data[6] = 2.3
* data[7] = 2
* data[8] = 0.5
* data[9] = 0.3
* data[10] = 0.1
* data[11] = 0
* data[12] = -10
********************************************************************************/
