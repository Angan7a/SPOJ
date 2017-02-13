#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ile_testow, ile_liczb, ile;
	int *wsk;
	scanf("%d", &ile_testow);
	while( ile_testow-- )
	{
			scanf("%d", &ile_liczb);
			ile = ile_liczb;
			wsk = (int *) malloc(ile_liczb * sizeof(int));
			while( ile-- ) scanf("%d", &wsk[ile]);

		for(int i = 0; i < ile_liczb; i++) printf("%d ", wsk[i]);
		printf("\n");
		free(wsk);

	}
	return 0;
}

