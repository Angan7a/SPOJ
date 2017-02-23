#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, t, w, k;  //w - liczba wierszy, k - liczba kolumn
    int *tab, *wynik;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &w);
        scanf("%d", &k);
        tab = (int *)malloc(w * k * sizeof(*tab));
        wynik = (int *)malloc(w * k * sizeof(*wynik));
        for (int i = 0; i < (w * k); i++) {
            scanf("%d", (tab + i));
            *(wynik + i) = *(tab + i);
        }
        //wiersz gorny
        for (int i = 1; i < k; i++) {
            *(wynik + (i - 1)) = *(tab + i);
        }
        //lewa kolmna
        for (int i = 0; i < (w - 1); i++) {
            *(wynik + (k * (i + 1))) = *(tab + k * i);
        }
        //wiersz dolny
        for (int i = 0; i < k - 1; i++) {
            *(wynik + (w-1) * k + (i + 1)) = *(tab + (w-1) * k  + i);
        }
        //prawa kolmna
        for (int i = 1; i < w ; i++) {
            *(wynik + k * (i-1) + k - 1) =  *(tab + k  * i + k - 1);
        }
        for (int i = 0; i <  w; i++) {
            for (int j = 0; j <  k; j++) {
                printf("%d ", *(wynik + i * k + j));
            }
            printf("\n");
        }
    free(tab);
    free(wynik);
    }
    return 0;
}
