/*
 * main.c
 *
 *  Created on: 10 Sep 2021
 *      Author: magdy
 */

#include "stdio.h"
#include "string.h"

void reverse()
{
	char chr;
	scanf("%c", &chr);
	if(chr!='\n')
	{
		reverse();
		printf("%c", chr);
	}

}
int main()
{
	printf("Enter sentence: ");
	fflush(stdout);
	fflush(stdin);
	reverse();

}

