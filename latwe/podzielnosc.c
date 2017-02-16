#include <stdio.h>

int main(void)
{
    int t, n, x, y;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d", &n, &x, &y);
        for (int i = 2; i < n; i++) {
            if((i%y != 0) && (i%x == 0)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}
