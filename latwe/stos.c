#include <stdio.h>

int main(void)
{
    char znak;
    int liczba, i = 0;
    int stos[10];
    while (scanf("%c", &znak) != EOF) {
        if (znak == '+') {
            scanf("%d", &liczba);
            if (i < 10) {
                stos[i++] = liczba;
                printf(":)\n");
            } else {
                printf(":(\n");
            }
        } else if (znak == '-') {
            if (i >= 1) {
                i--;
                printf("%d\n", stos[i]);
            } else {
                printf(":(\n");
            }
        }
    }
    return 0;
}
