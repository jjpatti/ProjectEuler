/*
 * main.c
 *
 *  Created on: Jul 6, 2018
 *      Author: john
 */
#include <stdio.h>

int main()
{
	long m, n, p, sum;
	m = 1;
	n = 1;
	p = 0;
	sum = 0;

	while(p < 4000000)
	{
		p = m + n;
		m = n;
		n = p;

		if(p%2 == 0)
			sum += p;
	}

	printf("total: %ld", sum);

	return 0;
}

