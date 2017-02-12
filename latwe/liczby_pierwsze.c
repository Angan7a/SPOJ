#include <stdio.h>

char * czy_pierwsza(int a);

int main(void)
{
	int ile, a;

	scanf("%d", &ile);

	while(ile--)
	{
		scanf("%d", &a);
		printf("%s\n", czy_pierwsza(a)); 
	}
return 0;
}

char * czy_pierwsza(int a)
{
	if( a < 2) return "NIE";
	for( int i = 2; i*i <= a; i++)
	{
		if( a%i == 0 ) return "NIE";
	}
	return "TAK";
}
