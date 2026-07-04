#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isSquare(int a)
{
    for (int i = 1; i * i <= a; i++)
    {
        if (i * i == a)
            return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int j = 1; j <= n; j++)
    {
        int a;
        scanf("%d", &a);

        int count = 0;

        for (int k = a; k <= 2 * a; k++)
        {
            if (isSquare(k))
                count++;
        }

        printf("%d\n", count);
    }

    return 0;
}
