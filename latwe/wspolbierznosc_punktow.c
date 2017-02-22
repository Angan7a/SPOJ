#include <stdio.h>

int main(void)
{
    int t;
    int ax, ay, bx, by, cx, cy, zz;
    scanf("%d", &t);
    while (t--) {
       zz = 0;
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);

            zz = ax*by*1 + ay*1*cx + bx*cy*1 - (cx*by*1 + bx*ay*1 + ax*cy*1);


      if (zz == 0) {
          printf("TAK\n");
      } else {
          printf("NIE\n");
      }
    }
    return 0;
}


