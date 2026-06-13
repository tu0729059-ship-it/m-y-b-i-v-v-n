#include <stdio.h>
int sohoanhao(int k)
{
    if (k < 6)
        return 0;
    int tong = 1;
    for (int i = 2; i * i < k; i++)
    {
        if (k % i == 0)
        {
            tong += i;
            tong += k / i;
        }
        if (i * i == k)
            tong += i;
    }
    return tong == k;
}
int main()
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2)
        return 0;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int flag = 0;
    for (int i = a; i <= b; i++)
    {
        if (sohoanhao(i))
        {
            if (flag == 1)
            {
                printf(" ");
            }
            printf("%d", i);
            flag = 1;
        }
    }
    printf("\n");
    return 0;
}
