#include <stdio.h>

int
z_rzymskich(char);

char
na_rzymskie(int);


int main(void)
{
    char a[20], b[20], dl_a, dl_b;
    int aa[20], bb[20], sum_a, sum_b, sum;
    aa[0] = bb[0] = 1000;
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
        sum_a = sum_b = 0;
        for (int i = 1; i <= dl_a; i++) {
            sum_a += aa[i];
        }

        for (int i = 1; i <= dl_b; i++) {
            sum_b += bb[i];
        }
//        printf("%d %d\n", sum_a, sum_b);
        sum = sum_a + sum_b;


        if (sum/2000 == 1) {
            printf("%c%c", na_rzymskie(1000), na_rzymskie(1000));
            sum = sum % 2000;
        }
        if (sum/1000 == 1) {
            printf("%c", na_rzymskie(1000));
            sum = sum % 1000;
        }
        if (sum/900 == 1) {
            printf("%c%c", na_rzymskie(100), na_rzymskie(1000));
            sum = sum % 900;
        }
        if (sum/800 == 1) {
            printf("%c%c%c%c", na_rzymskie(500), na_rzymskie(100), na_rzymskie(100), na_rzymskie(100));
            sum = sum % 800;
        }
        if (sum/700 == 1) {
            printf("%c%c%c", na_rzymskie(500), na_rzymskie(100), na_rzymskie(100));
            sum = sum % 700;
        }
        if (sum/600 == 1) {
            printf("%c%c", na_rzymskie(500), na_rzymskie(100));
            sum = sum % 600;
        }
        if (sum/500 == 1) {
            printf("%c", na_rzymskie(500));
            sum = sum % 500;
        }
        if (sum/400 == 1) {
            printf("%c%c", na_rzymskie(100), na_rzymskie(500));
            sum = sum % 400;
        }
        if (sum/300 == 1) {
            printf("%c%c%c", na_rzymskie(100), na_rzymskie(100), na_rzymskie(100));
            sum = sum % 300;
        }
        if (sum/200 == 1) {
            printf("%c%c", na_rzymskie(100), na_rzymskie(100));
            sum = sum % 200;
        }
        if (sum/100 == 1) {
            printf("%c", na_rzymskie(100));
            sum = sum % 100;
        }
        if (sum/90 == 1) {
            printf("%c%c", na_rzymskie(10), na_rzymskie(100));
            sum = sum % 90;
        }
        if (sum/80 == 1) {
            printf("%c%c%c%c", na_rzymskie(50), na_rzymskie(10), na_rzymskie(10), na_rzymskie(10));
            sum = sum % 80;
        }
        if (sum/70 == 1) {
            printf("%c%c%c", na_rzymskie(50), na_rzymskie(10), na_rzymskie(10));
            sum = sum % 70;
        }
        if (sum/60 == 1) {
            printf("%c%c", na_rzymskie(50), na_rzymskie(10));
            sum = sum % 60;
        }
        if (sum/50 == 1) {
            printf("%c", na_rzymskie(50));
            sum = sum % 50;
        }
        if (sum/40 == 1) {
            printf("%c%c", na_rzymskie(10), na_rzymskie(50));
            sum = sum % 40;
        }
        if (sum/30 == 1) {
            printf("%c%c%c", na_rzymskie(10), na_rzymskie(10), na_rzymskie(10));
            sum = sum % 30;
        }
        if (sum/20 == 1) {
            printf("%c%c", na_rzymskie(10), na_rzymskie(10));
            sum = sum % 20;
        }
        if (sum/10 == 1) {
            printf("%c", na_rzymskie(10));
            sum = sum % 10;
        }
        if (sum/9  == 1) {
            printf("%c%c", na_rzymskie(1), na_rzymskie(10));
            sum = sum % 9;
        }
        if (sum/8 == 1) {
            printf("%c%c%c%c", na_rzymskie(5), na_rzymskie(1), na_rzymskie(1), na_rzymskie(1));
            sum = sum % 8;
        }
        if (sum/7 == 1) {
            printf("%c%c%c", na_rzymskie(5), na_rzymskie(1), na_rzymskie(1));
            sum = sum % 7;
        }
        if (sum/6 == 1) {
            printf("%c%c", na_rzymskie(5), na_rzymskie(1));
            sum = sum % 6;
        }
        if (sum/5 == 1) {
            printf("%c", na_rzymskie(5));
            sum = sum % 5;
        }
        if (sum/4 == 1) {
            printf("%c%c", na_rzymskie(1), na_rzymskie(5));
            sum = sum % 4;
        }
        if (sum/3 == 1) {
            printf("%c%c%c", na_rzymskie(1), na_rzymskie(1), na_rzymskie(1));
            sum = sum % 3;
        }
        if (sum/2 == 1) {
            printf("%c%c", na_rzymskie(1), na_rzymskie(1));
            sum = sum % 2;
        }
        if (sum/1 == 1) {
            printf("%c", na_rzymskie(1));
            sum = sum % 1;
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
