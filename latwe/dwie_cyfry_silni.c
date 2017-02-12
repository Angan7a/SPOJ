#include <stdio.h>

int silnia(int);

int main(void)
{
	int t, a, b;

	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &a);
		if( a > 9 )
		{
			printf("%d %d\n", 0, 0);
		} else
		{
			b = silnia(a);
			b = b % 100;
			printf("%d %d\n", b/10, b%10);
		}
	}
return 0;
}

int silnia(int a)
{
	if(a < 2) return 1;
	return a*silnia(a-1);
}
