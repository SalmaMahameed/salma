#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Dig(int num, int x);
void main()
{
	int num, x;
	printf("number : \n");
	scanf("%d%d", &num, &x);
	printf("%d", Dig(num, x));
}
int Dig(int num, int x)
{

	int count = 0;
	if (num != 0)
	{

		if (((num % 10) % x) == 0)
		{
			count = 1 + Dig(num / 10, x);
		}
		else
			return Dig(num / 10, x);
	}
	return count;
}