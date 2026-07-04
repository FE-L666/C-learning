#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int money = 10000;
	for (int i = 1; i <= 5; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		money = money + a - b;
	}
	printf("%d", money);
	return 0;
}
