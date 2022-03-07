#define _CRT_SECURE_NO_WARNINGS
#define N 50
#include <stdio.h>

int str(char* s1, char* s2);
void main()
{
	char s1[N], s2[N];
	rewind(stdin);
	printf("enter a string 1 number : ");
	gets(s1);
	printf("enter a string 2 number : ");
	gets(s2);

	printf("%d", str(s1, s2));
}
int str(char* s1,char* s2)
{
	if (*s1 ==0 && *s2==0)
		return 0;
	if (*s1 == 0 && *s2 != 0)
		return -1;
	else if (*s2 == 0 && *s1 != 0)
		return 1;

	if (*s1 > *s2)
		return 1;
	else if (*s1 < *s2)
		return -1;
	else return str(s1 + 1, s2 + 1);
}