
#include <stdio.h>

int main(void)
{
    char t[100];
    char *wsk;
    int d = 0;
    while (scanf("%s", t) != EOF) {
       wsk = t;
       while (*wsk != '\0') {
           if (*wsk == '<') {
               d = 1;
           }
           if (*wsk == '>') {
               d = 0;
           }
           if ( 97 <= *wsk && *wsk <= 122 && d == 1) {
               printf("%c", *wsk - 32);
           } else {
               printf("%c", *wsk);
           }
           wsk++;
        }
        printf("\n");
    }
    return 0;
}
