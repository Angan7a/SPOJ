#include <stdio.h>

int znajdz_wielokrotnosc(int mniejsza, int wieksza);

int main(void)
{
	int t, a, b;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &a, &b);
		if( a == b ) printf("%d\n", a);
		if( a  < b ) printf("%d\n", znajdz_wielokrotnosc(a, b));
		if( a  > b ) printf("%d\n", znajdz_wielokrotnosc(b, a));
	}
	return 0;
}


int znajdz_wielokrotnosc(int a, int b)
{
	int s = 1;
	while( (b*s)%a != 0)
	{
		s++;
	}
	return b*s;
}
