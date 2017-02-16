#include <stdio.h>

int main(void)
{
    int t, ile, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &ile);
        scanf("%d", &a);
        ile--;
        while (ile--) {
            scanf("%d", &b);
            printf("%d ", b);
        }
            printf("%d\n", a);
    }
    return 0;
}
