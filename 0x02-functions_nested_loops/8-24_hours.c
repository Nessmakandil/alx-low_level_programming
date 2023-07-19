#include<stdio.h>
#include"main.h"
/**
 *  jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 */

void jack_bauer(void)
{
	int tm_hour = 0;
	int tm_min = 0;

	for (tm_hour = 0; tm_hour < 24; tm_hour++)
	{
		for (tm_min = 0; tm_min < 60; tm_min++)
		{
			printf("%02d:%02d\n", tm_hour, tm_min);
		}
	}
}
