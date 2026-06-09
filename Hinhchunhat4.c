#include <stdio.h>

int main()
{
    int m, n;
    if (scanf("%d %d", &m, &n) != 2)
        return 0;
    int max_val = m;
    if (n > m)
    {
        max_val = n;
    }
    for (int i = 1; i <= m; i++)
    {
        int da_in = 0;
        int giatrigiam = max_val - i + 1;
        while (giatrigiam >= 1 && da_in <= n)
        {
            printf("%d", giatrigiam);
            da_in++;
            giatrigiam--;
        }
        int gia_tri_tang = 2;
        while (da_in < n)
        {
            printf("%d", gia_tri_tang);
            gia_tri_tang++;
            da_in++;
        }
        printf("\n");
    }
}
