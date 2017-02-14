#include <stdio.h>
#include <stdlib.h>

char *
string_merge(char *, char *);

int main(void) {
    int ile_testow;
    char tab1[100], tab2[100];
    char *tab;
    scanf("%d", &ile_testow);
    while (ile_testow--) {
        scanf("%s", &tab1[0]);
        scanf("%s", &tab2[0]);
	tab = string_merge(tab1, tab2);
        printf("%s\n", tab);

        free(tab);

    }

return 0;
}



char *
string_merge(char *tab1, char *tab2)
{
    int d1 = 0, d2 = 0, size;
    char *wsk, *wsk_a, *wsk1 = tab1, *wsk2 = tab2;
    while (*wsk1 != '\0') {
        wsk1++;
        d1++;
    }
    while (*wsk2 != '\0') {
        wsk2++;
        d2++;
    }
    if (d1 < d2) {
        size = d1;
    } else {
        size = d2;
    }
    wsk = (char *)malloc((2*size + 1) * sizeof(char));
    wsk1 = tab1;
    wsk2 = tab2;
    wsk_a = wsk;
    int a = 0, b = 0;
    while (size-- ) {
        *wsk_a++ = *wsk1++;
        *wsk_a++ = *wsk2++;
    }
    wsk[2*d1] = '\0';



    return wsk;
}
