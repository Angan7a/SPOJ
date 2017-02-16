#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, roz;
    int ile;
    int *wsk_p, *wsk_np, *parz, *nieparz;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &ile);
        if (ile % 2 == 0) {
            roz = ile / 2;
        } else {
            roz = ile / 2 + 1;
        }
        parz = (int*)malloc((ile / 2) * sizeof(int));
        nieparz = (int*)malloc(roz * sizeof(int));
        wsk_p = parz;
        wsk_np = nieparz;
        for (int i = 0; i < (ile / 2); i++) {
            scanf("%d", wsk_np++);
            scanf("%d", wsk_p++);
        }
        if (ile % 2 != 0 ) {
            scanf("%d", wsk_np);
        }
        for (int i = 0; i < (ile / 2); i++) {
            printf("%d ", parz[i]);
        }
        for (int i = 0; i < roz; i++) {
            printf("%d ", nieparz[i]);
        }
        printf("\n");
        free(parz);
        free(nieparz);
    }
    return 0;
}
