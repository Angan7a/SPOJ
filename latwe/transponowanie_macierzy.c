#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int  wier, kol;
    int *tab, *wsk1;
        scanf("%d", &wier);
        scanf("%d", &kol);
        tab = (int *)malloc(wier * kol * sizeof(*tab));
        wsk1 = tab;
       for (int i = 0; i < wier * kol; i++) {
            scanf("%d", wsk1 ++);
       }
       wsk1 = tab;
       for (int j = 0; j < kol; j ++) {
           wsk1 = tab + j;
       for (int i = 0; i <  wier; i ++) {
            printf("%d  ", *(wsk1 + kol * i));
       }
           printf("\n");
      }

    free(tab);
    return 0;
}
