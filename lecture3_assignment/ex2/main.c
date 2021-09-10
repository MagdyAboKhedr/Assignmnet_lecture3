/*
 * main.c
 *
 *  Created on: 10 Sep 2021
 *      Author: magdy
 */

#include "stdio.h"

int fact(int n)
{
	if(n>=1)
	{
		return n * fact(n-1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int x,res;
	printf("Enter number: ");
	fflush(stdout);
	fflush(stdin);

	scanf("%d", &x);
	res=fact(x);
	printf("Factorial=%d", res);
}

