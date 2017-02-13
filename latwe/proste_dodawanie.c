#include <stdio.h>

int main(void)
{
	int t, a, b, sum = 0;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &a);
		while(a--)
		{
			scanf("%d", &b);
			sum +=b;
		}
		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}
