#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, ile, a, sum, mniejsza, wieksza, wynik;
    int tab[101];
    int *liczby, *wsk;
    float sr;
    scanf("%d", &t);
    while (t--) {
        for (int i = 0; i < 101; i++) {
            tab[i] = 0;
        }
        sum = 0;
        scanf("%d", &ile);
        liczby = (int *)malloc(ile * sizeof(*liczby));
        for (int i = 0; i < ile; i++) {
            scanf("%d", &a);
            *(liczby + i) = a;
            tab[a]++;
            sum += a;
        }
        sr = (float) sum / ile;
        if (sr == 0) {
            wynik = 0;
        } else {

            for (mniejsza = sr; tab[mniejsza] == 0; mniejsza--);
            for (wieksza = sr + 1; tab[wieksza] == 0; wieksza++);
            wsk = liczby;
            if (sr - mniejsza == wieksza - sr) {
                while (*wsk != mniejsza && *wsk != wieksza) {
                    wsk++;
                }
            wynik = *wsk;
            } else if (sr - mniejsza < wieksza - sr) {
                wynik = mniejsza;
            } else {
                wynik = wieksza;
            }
        }
    printf("%d\n", wynik);
    free(liczby);
    }
    return 0;
}
