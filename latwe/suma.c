#include <stdio.h>

int main(void)
{
    int a, sum = 0;
    while (scanf("%d", &a) != EOF) {
        printf("%d\n", sum += a);
    }


    return 0;
}


