#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, ilosc_obzartuchow, ile_w_pudelku, sum, ile, czas_jedzenia;
    const int sekundy = 60 * 60 *24;
    int *ile_zje;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &ilosc_obzartuchow,  &ile_w_pudelku);
	ile_zje = (int *)malloc(ilosc_obzartuchow * sizeof(int));
        for (int i = 0; i < ilosc_obzartuchow; i++) {
            scanf("%d", &czas_jedzenia);
            ile_zje[i] = sekundy / czas_jedzenia;
        }
        sum = 0;
        for (int i = 0; i < ilosc_obzartuchow; i++) {
            sum += ile_zje[i];
        }
        ile = sum / ile_w_pudelku;
        if (sum % ile_w_pudelku) {
            ile++;
        }
        printf("%d\n", ile);
        free(ile_zje);
     }

    return 0;
}
