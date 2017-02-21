#include <stdio.h>
int main(void)
{
    char t;
    int d = 0;
    while (scanf("%c", &t) != EOF) {
       if (t == ' ') {
           d++;
       } else if (d == 0){
           printf ("%c", t);
       }
       if ( d > 0 && 97 <= t && t <= 122 && t != ' ') {
           printf ("%c", t - 32);
           d = 0;
       } else if (d > 0 && t != ' ') {
           printf ("%c", t);
           d = 0;
       }
    }
    return 0;
}
