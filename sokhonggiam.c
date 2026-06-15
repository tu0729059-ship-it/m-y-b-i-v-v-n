#include <stdio.h>
#include <math.h>
int check(int n)
{
    int chusosau = 10;
    while (n > 0)
    {
        int chusohientai = n % 10;
        if (chusohientai > chusosau)
        {
            return 0;
        }
        chusosau = chusohientai;
        n /= 10;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int start = pow(10, n - 1);
        int end = pow(10, n);
        int flag = 0;
        for (int i = start; i < end; i++)
        {
            if (check(i))
            {
                if (flag == 1)
                    printf(" ");
                printf("%d", i);
                flag = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
