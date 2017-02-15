#include <stdio.h>

void
zapamietaj(int *, int pozycja, int liczba);

int
dodaj( int *, int p1, int p2);

int
pomnoz( int *, int p1, int p2);

int
odejmij( int *, int p1, int p2);

int
podziel( int *, int p1, int p2);

int
modulo( int *, int p1, int p2);


int main(void) {
	int a, b;
	int M[10];
	char znak;
	while( scanf("%c%d%d\n", &znak, &a, &b) != EOF)
	{
		if (znak == 'z') zapamietaj(M, a, b);
		if (znak == '+') printf("%d\n", dodaj(M, a, b));
		if (znak == '*') printf("%d\n", pomnoz(M, a, b));
		if (znak == '-') printf("%d\n", odejmij(M, a, b));
		if (znak == '/') printf("%d\n", podziel(M, a, b));
		if (znak == '%') printf("%d\n", modulo(M, a, b));

	}// your code here

	return 0;
}


void
zapamietaj(int *M, int pozycja, int liczba)
{
	M[pozycja] = liczba;
}

int
dodaj( int *M, int p1, int p2)
{
	return M[p1] + M[p2];
}

int
pomnoz( int *M, int p1, int p2)
{
	return M[p1] * M[p2];

}

int
odejmij( int *M, int p1, int p2)
{
	return M[p1] - M[p2];
}

int
podziel( int *M, int p1, int p2)
{
	return M[p1] / M[p2];
}

int
modulo( int *M, int p1, int p2)
{
	return M[p1] % M[p2];
}

