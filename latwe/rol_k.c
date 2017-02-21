#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ile, k;
    int *tab;
    scanf("%d", &ile);
    scanf("%d", &k);
    tab = (int *)malloc(ile * sizeof(*tab));
    for (int i = 0; i < ile; i++) {
        scanf("%d", tab+i);
    }
    k = k % ile;
    if (k ==0) {
        k++;
    }
    for (int i = k; i < ile; i++) {
        printf("%d ", *(tab + i));
    }
    for (int i = 0; i < k; i++) {
       printf("%d ", *(tab + i));
    }
    free(tab);
    return 0;
}
