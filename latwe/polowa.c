#include <stdio.h>

int main(void)
{
    int t, i;
    char napis[2001];
    scanf("%d", &t);
    while (t--) {
       scanf("%s", napis);
       for (i = 0; napis[i] != '\0'; i++);
       for (int j = 0; j < i/2  ; j++) {
           printf("%c", napis[j]);
       }
       printf("\n");


    }
    return 0;
}
