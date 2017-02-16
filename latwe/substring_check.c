#include <stdio.h>

int
czy_identyczne(char *, char *);

int main(void)
{
    char a[11], b[6], j;
    char *wsk_a;
    while (scanf("%s %s", a, b) != EOF) {
       j = 0;
       wsk_a = a;
       for (int i = 0; i < 5; i++) {
              j += czy_identyczne(&wsk_a[i], b);
       }
       if (j > 0) {
           printf("1\n");
       } else
       {
           printf("0\n");
       }
    }
    return 0;
}

int
czy_identyczne(char *a, char *b)
{
    for (int i = 0; i < 5; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
return 1;
}
