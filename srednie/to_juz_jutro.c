#include <stdio.h>

int main(void)
{
    int t, a, ile, liczba, z;
    char tab[10001];
    char *wsk;
    scanf("%d", &t);
    while (t--) {
       scanf("%d %s", &a, tab);
       ile = 0;
       liczba = 0;
       wsk = tab;
       while (*wsk != '\0') {
           ile++;
           wsk++;
       }
       wsk--;
       z = 1;
       for (int i = 1; i <= 3; i++) {
           if (i <= ile) {
               liczba += (*wsk - '0') * z;
               wsk--;
               z *= 10;
           }
       }
      if (liczba == 0) liczba = 1000;
       if (liczba < a) {
            printf("NIE\n");
       } else if (liczba % a == 0) {
            printf("TAK\n");
        } else {
            printf("NIE\n");
        }
//printf("liczba = %d\n", liczba);
    }
    return 0;
}
