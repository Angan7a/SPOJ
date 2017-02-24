#include <stdio.h>

char
zamien(int);


int main(void)
{
    int t, a, b , r, z ;
    char sz[7], je[7];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &b);
        for (int i = 0; i < 7; i++) {
            sz[i] = je[i] = ' ';
        }
        z = 6;
        a = b;
        while (b) {
           sz[z--] = zamien(b % 16);
           b = b / 16;
        }
        printf("%s ", sz);
        z = 6;
        while (a) {
           je[z--] = zamien(a % 11);
           a = a / 11;
        }
        printf("%s\n", je);
    }
    return 0;
}


char
zamien(int a)
{
    if (a == 0) return '0';
    if (a == 1) return '1';
    if (a == 2) return '2';
    if (a == 3) return '3';
    if (a == 4) return '4';
    if (a == 5) return '5';
    if (a == 6) return '6';
    if (a == 7) return '7';
    if (a == 8) return '8';
    if (a == 9) return '9';
    if (a == 10) return 'A';
    if (a == 11) return 'B';
    if (a == 12) return 'C';
    if (a == 13) return 'D';
    if (a == 14) return 'E';
    if (a == 15) return 'F';

}
