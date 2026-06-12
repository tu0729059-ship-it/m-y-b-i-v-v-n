#include <stdio.h>
int main()
{
    int y;
    scanf("%d", &y);
    while (y--)
    {
        int n, s = 0;
        scanf("%d", &n);
        while (n != 0)
        {
            s += (n % 10);
            n /= 10;
        }
        if (s % 10 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
