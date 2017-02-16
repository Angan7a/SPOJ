#include <stdio.h>

void
pierwsza(int a, int b);

int 
czy_pierwsza(int a);

int main(void)
{
	int ile, a, b;

	scanf("%d", &ile);

	while(ile--)
	{
		scanf("%d %d", &a, &b);
		pierwsza(a, b);
		printf("\n");
	}
return 0;
}

void
pierwsza(int a, int b)
{
	for( int i = a; i <= b; i++)
	{
		if (czy_pierwsza(i)) {
			printf("%d\n", i);
		}
	}
}



int
czy_pierwsza(int a)
{
        if( a < 2) return 0;
        for( int i = 2; i*i <= a; i++)
        {
                if( a%i == 0 ) return 0;
        }
        return 1;
}
