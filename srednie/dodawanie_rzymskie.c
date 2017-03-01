#include <stdio.h>

int
z_rzymskich(char);

char
na_rzymskie(int);


int main(void)
{
    char a[20], b[20], dl_a, dl_b;
    int aa[20], bb[20], sum, z;
    aa[0] = bb[0] = 2000;
    while (scanf("%s %s", a, b) != EOF) {
        dl_a = 0;
        dl_b = 0;
        for (int i = 0; a[i] != '\0'; i++) {
            aa[i + 1] = z_rzymskich(a[i]);
            dl_a++;
            if (aa[i] < aa[i + 1] ) {
                aa[i] *= -1;
            }
        }
        for (int i = 0; b[i] != '\0'; i++) {
            bb[i+1] = z_rzymskich(b[i]);
            dl_b++;
            if (bb[i] < bb[i + 1] ) {
                bb[i] *= -1;
            }
        }
        sum = 0;
        for (int i = 1; i <= dl_a; i++) {
            sum += aa[i];
        }

        for (int i = 1; i <= dl_b; i++) {
            sum += bb[i];
        }
        z = 10000;
        while (sum) {
           if ((sum / (9 * z)) == 1) {
               printf("%c%c", na_rzymskie(z), na_rzymskie(z * 10));
     	       sum = sum % (9*z);
           }
           if ((sum / (8 * z)) == 1) {
               printf("%c%c%c%c", na_rzymskie(5*z), na_rzymskie(z), na_rzymskie(z), na_rzymskie(z));
               sum = sum % (8*z);
           }
           if ((sum / (7 * z)) == 1) {
               printf("%c%c%c", na_rzymskie(5*z), na_rzymskie(z), na_rzymskie(z));
               sum = sum % (7*z);
           }
           if ((sum / (6 * z)) == 1) {
               printf("%c%c", na_rzymskie(5*z), na_rzymskie(z));
               sum = sum % (6*z);
           }
           if ((sum / (5 * z)) == 1) {
               printf("%c", na_rzymskie(5*z));
               sum = sum % (5*z);
           }
           if ((sum / (4 * z)) == 1) {
               printf("%c%c", na_rzymskie(z), na_rzymskie(5*z));
               sum = sum % (4*z);
           }
           if ((sum / (3 * z)) == 1) {
               printf("%c%c%c", na_rzymskie(z), na_rzymskie(z), na_rzymskie(z));
               sum = sum % (3*z);
           }
           if ((sum / (2 * z)) == 1) {
               printf("%c%c", na_rzymskie(z), na_rzymskie(z));
               sum = sum % (2*z);
           }
           if ((sum / (1 * z)) == 1) {
               printf("%c", na_rzymskie(z));
               sum = sum % (1*z);
           }
           z /= 10;
        }
        printf("\n");
    }
    return 0;
}


int
z_rzymskich(char a)
{
    if (a == 'I' ) return 1;
    if (a == 'V' ) return 5;
    if (a == 'X' ) return 10;
    if (a == 'L' ) return 50;
    if (a == 'C' ) return 100;
    if (a == 'D' ) return 500;
    if (a == 'M' ) return 1000;

}

char
na_rzymskie(int a)
{

    if (a == 1 ) return 'I';
    if (a == 5 ) return 'V';
    if (a == 10 ) return 'X';
    if (a == 50 ) return 'L';
    if (a == 100 ) return 'C';
    if (a == 500 ) return 'D';
    if (a == 1000 ) return 'M';

}
