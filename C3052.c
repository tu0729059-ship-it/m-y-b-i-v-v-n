#include <stdio.h>
#include <math.h>
#include <string.h>
int prime[1000005] = {0};
void sieve()
{
    for (int i = 2; i <= 1000000; i++)
        prime[i] = 1;
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
int main()
{
    sieve();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long l, r;
        scanf("%lld %lld", &l, &r);
        int start = (int)sqrt(l);
        int end = (int)sqrt(r);
        if ((long long)start * start < l)
            start++;
        int dem = 0;
        for (int i = start; i <= end; i++)
        {
            if (prime[i])
            {
                dem++;
            }
        }
        printf("%d\n", dem);
    }
}
