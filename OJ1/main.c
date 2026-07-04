#include <stdio.h>
#include <stdbool.h>

bool f(int m)
{
    return (m % 3 == 0 || m % 5 == 0 || m % 7 == 0);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int count = 0;

        for (int j = a; j <= b; j++)
        {
            if (f(j))
                count++;
        }

        printf("%d\n", count);
    }

    return 0;
}
