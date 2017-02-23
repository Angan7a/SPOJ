#include <stdio.h>

int main(void)
{
    int a = 0, pop = 0, obec = 0;
    scanf("%d", &pop);
    printf("%d\n", pop);
    while (a < 3) {
        scanf("%d", &obec);
        if (obec == 42 && pop != 42) {
            a++;
        }
        printf("%d\n", obec);
        pop = obec;
    }
    return 0;
}
