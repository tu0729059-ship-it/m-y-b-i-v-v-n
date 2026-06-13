#include <stdio.h>
int prime[1000005];
void sangnguyento()
{
    for (int i = 2; i <= 1000000; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int thuannghich(int n)
{
    int goc = n, dao = 0;
    while (n > 0)
    {
        dao = dao * 10 + (n % 10);
        n /= 10;
    }
    return dao == goc;
}
int main()
{
    sangnguyento();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int dem = 0;
        for (int i = a; i <= b; i++)
        {
            if (prime[i] == 1 && thuannghich(i))
            {
                if (dem % 10 != 0)
                    printf(" ");
                printf("%d", i);
                dem++;
                if (dem % 10 == 0)
                    printf("\n");
            }
        }
        if (dem % 10 != 0)
            printf("\n");
        printf("\n");
    }
    return 0;
}
