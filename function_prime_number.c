#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int prime(int m)
{
	int i = 0;
	for (i = 2; i < m; i++)
	{
		
		if (m % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int m = 0;
	for (m = 100; m <= 200; m++)
	{
	int ret=prime(m);
	if (ret == 1)
		printf("%d是素数\n", m);
	else
		printf("%d不是素数\n", m);
	}

	return 0;
}