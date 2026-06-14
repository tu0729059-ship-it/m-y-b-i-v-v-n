#include <stdio.h>
long long thuannghich(long long n)
{
    long long goc = n;
    long long dao = 0;
    while (n > 0)
    {
        dao = dao * 10 + n % 10;
        n /= 10;
    }
    return dao == goc;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long k;
        scanf("%lld", &k);
        if (thuannghich(k))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
