#include <stdio.h>
int f(int n)
{
	if (n<10)
		return n;
	return f(n / 10) + n % 10;
}
int main()
{
	printf("%d", f(67));
}