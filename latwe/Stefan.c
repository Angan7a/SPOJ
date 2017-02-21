#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ile, sum_left, sum_right, sum_l_max, sum_r_max, sum_max = 0;
    int *tab;
    scanf("%d", &ile);
    tab = (int *)malloc(ile * sizeof(*tab));
    for  (int i = 0; i <  ile; i++) {
        scanf("%d", tab + i);
    }
    for (int d = 0; d <  ile; d++) {
        sum_left = sum_right = sum_l_max = sum_r_max = 0;
        for (int i = d -1; i >= 0; i--) {
            sum_left += *(tab + i);
            if (sum_left > sum_l_max) sum_l_max = sum_left;
        }
        for (int i = d; i <  ile; i++) {
            sum_right += *(tab + i);
            if (sum_right > sum_r_max) sum_r_max = sum_right;
        }
        if (sum_r_max > sum_max) sum_max = sum_r_max;
        if (sum_l_max > sum_max) sum_max = sum_l_max;
        if (sum_l_max + sum_r_max > sum_max) sum_max = sum_l_max + sum_r_max;

    }
    printf("%d\n", sum_max);
    return 0;
}
