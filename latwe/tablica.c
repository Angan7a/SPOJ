#include <stdio.h>

int main(void)
{
    int a, ile = 0;
    int tab[1000] = {0};
    while (scanf("%d", &a) != EOF) {
        tab[ile++] = a;
    }
    for (int i = ile - 1; 0 <= i; i--) {
        printf("%d ", tab[i]);
    }
    return 0;
}
