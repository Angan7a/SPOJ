#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, ile, a, sum;
    int tab[101];
    float sr;
    scanf("%d", &t);
    while (t--) {
        for (int i = 0; i < 101; i++) {
            tab[i] = 0;
        }
        sum = 0;
        scanf("%d", &ile);
        for (int i = 0; i < ile; i++) {
            scanf("%d", &a);
            tab[a]++;
            sum += a; 
        }
        sr = (float) sum / ile;
        printf("%f\n", sr);
    }
    return 0;
}
