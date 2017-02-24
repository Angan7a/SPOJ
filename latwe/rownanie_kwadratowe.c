#include <stdio.h>

int main(void)
{
    float a, b, c, delta;
    while (scanf("%f %f %f", &a, &b, &c) != EOF) {
       delta = b * b - 4 * a * c;
       if (delta < 0) {
           printf("0\n");
       } else if (delta == 0) {
           printf("1\n");
       } else {
           printf("2\n");
       }
    }
    return 0;
}
