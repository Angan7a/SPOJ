#include <stdio.h>

int main(void)
{
    int a , b;
    scanf("%d", &a);
    if (a ==1 || a == 2) {
        printf("NIE\n");
    } else {
        a++;
        b = a;
        while (a--) {
           if (a % 2 == 0) {
              printf("%d ", a);
           }
        }
        while (b--) {
           if (b % 2 != 0) {
              printf("%d ", b);
           }
       }
    }
    printf("\n");
    return 0;
}
