#include <stdio.h>

int ile_powtorzen(char *);

int main(void)
{
	int t, s;
	char tab[200];
	char *wsk1;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", tab);
		wsk1 = &tab[0];
		while(*wsk1 != '\0')
		{
			s = ile_powtorzen(wsk1);
			if( s == 1 ) printf("%c", *wsk1);
			if( s == 2 ) printf("%c%c", *wsk1, *wsk1);
			if( s  > 2 ) printf("%c%d", *wsk1, s);
			wsk1 = wsk1 + s;
		}
		printf("\n");
	}
	return 0;
}


int ile_powtorzen(char *wsk)
{
	int s = 1;
	while( (*(wsk + 1) != '\0') && (*wsk == *(wsk + 1)) )
	{
		s++;
		wsk++;
	}
	return s;
}
