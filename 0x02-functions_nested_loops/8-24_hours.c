#include "main.h"
/**
* jack_bauer - print 24 hours
* Return: 0
*/
void jack_bauer(void)
{
	int hours;
	int mins;
	int hrem;
	int mrem;

	for (hours = 0; hours <= 23; hours++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			mrem = mins % 10;
			hrem = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hrem + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mrem = '0');
			_putchar('\n');
		}
		mins = 0;
	}
}
