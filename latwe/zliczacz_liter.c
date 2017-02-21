#include <stdio.h>

int main(void)
{
    int t;
    char a;
    int tab[123] = {0};
    scanf("%d", &t);
    while (scanf("%c", &a) != EOF) {
        tab[a]++;
    }
    for (int i = 97; i < 123; i++) {
        if (tab[i] > 0) {
            printf("%c %d\n", i, tab[i]);
        }
    }
    for (int i = 65; i < 91; i++) {
        if (tab[i] > 0) {
            printf("%c %d\n", i, tab[i]);
        }
    }
    return 0;
}
