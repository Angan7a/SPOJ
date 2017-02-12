#include <stdio.h>


int main(void)
{
	int t;
	char tab[200];
	char *wsk, *wsk_nastepny, wsk_plus_dwa;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", tab);
		wsk = tab;
		wsk_nastepny = wsk + 1;
		wsk_plus_dwa = wsk +2;
		if( *wsk != *wsk_nastepny )
		{
			printf("%c\n", *wsk);
			wsk ++;
		}
		printf("%c\n", *wsk);

	}

	return 0;
}
