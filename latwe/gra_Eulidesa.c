#include <stdio.h>

int main(void)
{
    int t, a, b, c;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &a, &b);

        while((a != b) && (a >= 0) && (b >= 0)) {
            if (a > b) {
                c = a;
                a %= b;
                if ( a == 0 ) a = b;
            }
            if (b > a) {
                c = b;
                b %= a;
                if ( b == 0 ) b = a;
            }
        }
        printf("%d\n", a + b);
    }
    return 0;
}
