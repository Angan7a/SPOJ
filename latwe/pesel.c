#include <stdio.h>

int main(void)
{
    int t, m, sum;
    char pesel[12];
    int mnoz[4] = {1, 3, 7, 9};
    scanf("%d", &t);
    while (t--) {
        scanf("%s", pesel);
        sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += (pesel[i] - '0') * mnoz[i%4];
        }
        sum += (pesel[10] - '0');

        if (sum%10 == 0)
        {
            printf("D\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}
