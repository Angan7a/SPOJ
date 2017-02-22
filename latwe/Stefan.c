#include <stdio.h>

int main(void)
{
    int ile, a;
    long long sum = 0, sum_max = 0;
    scanf("%d", &ile);
    while (ile --) {
        scanf("%d", &a);
        if (sum > 0) {
            sum += a;
        } else {
            sum = a;
        }
        if (sum > sum_max) {
            sum_max = sum;
        }
    }
    printf("%llu\n", sum_max);
    return 0;
}
