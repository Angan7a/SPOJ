#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t, ile;
    char *wsk_char, *wsk;
    int *wsk_int;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &ile);
        wsk_char = (char *)malloc(10*(ile + 1) * sizeof(char));
        wsk_int = (int *)malloc(2*ile * sizeof(int));
        wsk = wsk_char;
        while (ile--) {
            scanf("%s", wsk);
            printf("%s", wsk);
            wsk = wsk + 11;

        }
    }
    return 0;
}
