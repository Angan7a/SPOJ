#include <stdio.h>

int main(void)
{
    int t, v1, v2;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &v1, &v2);
        printf("%d\n", 2 * v1 * v2 / (v1 + v2));

    }
    return 0;
}
