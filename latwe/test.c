#include <stdio.h>

int main(void)
{
    int t;
    while (scanf("%d", &t) && t != 42) {
        printf("%d\n", t);
    }
    return 0;
}
