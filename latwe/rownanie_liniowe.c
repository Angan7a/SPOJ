#include <stdio.h>

int main(void)
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if ( b == c) {
        printf("NWR\n");
    } else if (a == 0) {
        printf("BR\n");
    } else {
        printf("%0.2f\n", ((c - b) / a ));
    }
    return 0;
}
