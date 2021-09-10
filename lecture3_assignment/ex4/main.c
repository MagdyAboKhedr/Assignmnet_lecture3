/*
 * main.c
 *
 *  Created on: 10 Sep 2021
 *      Author: magdy
 */

#include "stdio.h"

int power(int base, int pwr)
{
	if(pwr!=0)
	{
		return base * power(base, pwr-1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int base, pwr, res;
	printf("Enter base number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &base);

	printf("Enter power: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &pwr);

	res = power(base, pwr);
	printf("%d ^ %d = %d", base, pwr, res);
}

