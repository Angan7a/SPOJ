#include <stdio.h>
int
OstatniaNiezerowa(int);

int main(void)
{
    int t, a;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &a);
           printf("%d\n", OstatniaNiezerowa(a));
    }
    return 0;
}


int
OstatniaNiezerowa(int N)
{
    int i, j, wynik = 1, a2 = 0, a5 = 0, a;
    for (i = 1; i <= N; i++) {
        j = i;
        //dzielenie i przez 2 i 5
        while ((j % 2) == 0) {
            j /= 2;
            a2++;
        }
        while ((j % 5) == 0) {
            j /= 5;
            a5++;
         }
         wynik = (wynik * (j % 10)) % 10;
     }
     a = a2 - a5;
     for (i = 1; i <= a; i++) {
         wynik = (wynik * 2) %10;
     }
     return wynik;
}
