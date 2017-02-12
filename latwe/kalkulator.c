#include <stdio.h>

int main(void) {
	int a, b;
	char znak;
	while( scanf("%c%d%d\n", &znak, &a, &b) != EOF)
	{
//	printf("%c", znak);
		if (znak == '+') printf("%d\n", a+b);
		if (znak == '*') printf("%d\n", a*b);
		if (znak == '-') printf("%d\n", a-b);
		if (znak == '/') printf("%d\n", a/b);
		if (znak == '%') printf("%d\n", a%b);
	
	}// your code here

	return 0;
}
