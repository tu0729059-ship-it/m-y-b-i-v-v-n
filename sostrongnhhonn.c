#include <stdio.h>
int strong(int n)
{
    int gt[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    int goc = n;
    int tong = 0;
    while (n > 0)
    {
        int chu_so = n % 10;
        tong += gt[chu_so];
        n /= 10;
    }
    return tong == goc;
}
int main()
{
    int n;
    scanf("%d", &n);
    int flag = 0;
    for (int i = 1; i < n; i++)
    {
        if (strong(i))
        {
            if (flag == 1)
                printf(" ");
            printf("%d", i);
            flag = 1;
        }
    }
    printf("\n");
    return 0;
}
