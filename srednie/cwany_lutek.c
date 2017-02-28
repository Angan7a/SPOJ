#include <stdio.h>

int main(void)
{
    unsigned int t, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);
        if ((a|b) == a) {
            printf("N\n");
        } else {
            printf("P\n");
        }

    }
    return 0;
}
