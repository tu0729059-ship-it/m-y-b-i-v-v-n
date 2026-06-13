#include <stdio.h>
void xuly(int so)
{
    int t;
    scanf("%d", &t);
    printf("Test %d:", so);
    for (int i = 2; i * i <= t; i++)
    {
        if (t % i == 0)
        {
            int dem = 0;
            while (t % i == 0)
            {
                dem++;
                t /= i;
            }
            printf(" %d(%d)", i, dem);
        }
    }
    if (t > 1)
    {
        printf(" %d(1)", t);
    }
    printf("\n");
}
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        xuly(i);
    }
}
