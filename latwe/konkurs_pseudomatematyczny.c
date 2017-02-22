#include <stdio.h>

int main(void)
{
    int i, t, a, b, zz = 10000;
    int tab[1001];
    scanf("%d", &t);
    while (t--) {
       for(int g = 0; g < 1001; g++) {
            tab[g] = 0;
          }
        scanf("%d", &a);
        for (int i = 0; i < a; i++) {
            scanf("%d", &b);
            tab[b]++;
        }

        for (i = 1000; tab[i]== 0; i--) ;

        while (tab[i]--) {
            printf("%d ", i);
        }
        for (int j = 0; j < i; j++) {
            if (tab[j] > 0) {
                while (tab[j]--) {
                    printf("%d ", j);
                }
            }
        }
   printf("\n");
   }
    return 0;
}
