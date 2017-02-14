#include <stdio.h>

int
nwd(int a, int b);

int main(void) {
    int m_ile_testow, m_a, m_b;

    scanf("%d\n", &m_ile_testow);
    while (m_ile_testow--) {
        scanf("%d", &m_a);
        scanf("%d", &m_b);
        if (m_a <= m_b) {
            printf("%d\n", nwd(m_a, m_b));
        } else {
            printf("%d\n", nwd(m_b, m_a));
        }
    }


   return 0;
}


int
nwd(int a, int b)
{
    for (int i = a; i >= 0; i--) {
        if (((a % i) == 0) && ((b % i) == 0)) {
            return i;
        }
    }
}
