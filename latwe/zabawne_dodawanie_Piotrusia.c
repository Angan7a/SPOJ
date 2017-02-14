#include <stdio.h>

int czy_symetryczna(int *);
int dodaj(int *);
void wyczysc(int *);

int main(void)
{
	int ile_testow, liczba, jednosci, dziesiatki, ile = 0, wynik;
	int tab[100];

	scanf("%d", &ile_testow);
	while(ile_testow--)
	{
		wyczysc(tab);
		scanf("%d", &liczba);
		dziesiatki = liczba/10;
		jednosci = liczba%10;
		if( dziesiatki == 0) 
		{
			printf("%d %d\n", liczba, 0);
		} else
		{
			tab[0] = jednosci;
			tab[1] = dziesiatki;
			while(czy_symetryczna(&tab[0]) != 1)
			{
				ile++;
				wynik = dodaj( tab );
			}
			if(ile == 0)
			{
				printf("%d %d\n", liczba, ile); 
			} else
			{
				printf("%d %d\n", wynik, ile); 
			}
			ile = 0;
		}
	}
	return 0;
}

int czy_symetryczna(int *tab)
{
	int s = 0;
	int *wsk;
	wsk = tab;
	while(*wsk != -1)
	{
		s++;
		wsk++;
	}
	for(int i = 0; i < s/2; i++)
	{
		if( tab[i] != tab[s-i-1] ) return 0;
	}
	return 1;
}


int dodaj(int *tab)
{
	int s = 0, liczba_a = 0, liczba_b = 0, a=1;
	int *wsk, *wsk_tab;
	int j = 1, i = 0;
	char str[100];
	char *wsk_char;
	wsk_tab = tab;
	wsk = tab;
	while(*wsk != -1)
	{
		s++;
		wsk++;
	}

	for(int i = 1; i <= s; i++)
	{

		liczba_a += *(wsk - i) * j;
		liczba_b += *(tab + i - 1) * j;
		j *=10;
	}
	liczba_a +=  liczba_b;
	liczba_b = liczba_a;
	j = 1;
	i = 0;
	while(liczba_b/j)
	{
		j *=10;
		tab[i] = liczba_a%10;
		liczba_a = liczba_a/10;
		i++;
	}
	return liczba_b;

}


void wyczysc(int *tab)
{
	for(int i = 0; i < 100; i++)
		{
			tab[i] = -1;

		}

}
