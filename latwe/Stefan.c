#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ile, sum_przod_max, poz_przod, sum_tyl_max, poz_tyl;
    int *tab, *wsk1, *wsk2, sum = 0;
    scanf("%d", &ile);
    tab = (int *)malloc(ile * sizeof(*tab));
    wsk1 = tab;
    for  (int i = 0; i <  ile; i++) {
        scanf("%d", wsk1);
        sum += *wsk1;
        wsk1++;
    }
    wsk1 = tab;
    for  (int i = 0; i <  ile; i++) {
        printf("%d %d\n", *wsk1++, sum);
    }
    return 0;
}
