#include <stdio.h>

int main(void)
{
    int t, u, c;   //u - liczba uczniów(lczanie z Jasiem), c - ilosc cukierow
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &u);
        scanf("%d", &c);
        if ( u == 1 ) {     //jeśli do szkoly przyjdzie tylko Jasio to on zje wszystkei cukierki
            printf("TAK\n");
        } else if (c % (u - 1) == 0) {
            printf("NIE\n");
        } else {
            printf("TAK\n");
        }
    }
    return 0;
}
