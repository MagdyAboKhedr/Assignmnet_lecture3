/*
 * main.c
 *
 *  Created on: 10 Sep 2021
 *      Author: magdy
 */


#include "stdio.h"

void prime(int low, int high)
{
	int flag, i;
	while (low < high)
	{
		flag = 0;
		if (low <= 1)
		{
			++low;
			continue;
		}

		for (i = 2; i <= low / 2; ++i)
		{
			if (low % i == 0) {
				flag = 1;
				break;
			}
		}

		if (flag == 0)
		{
			printf("%d ", low);
		}

		low++;
	}
}

int main()
{
	int x, y;
	printf("Enter two numbers: ");
	fflush(stdout);
	fflush(stdin);

	scanf("%d %d", &x, &y);
	prime(x,y);
}
