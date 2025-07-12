#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int i=0; i<t; i++)
	{
		char a[100];
		char b[100];
		char c[100];
		scanf("%s %s %s", a, b, c);
		printf("%c%c%c\n", a[0], b[0], c[0]);
	}
	return 0;
}