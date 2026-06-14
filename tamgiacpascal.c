#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int C[15][15];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                C[i][j] = 1;
            }
            else
            {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        printf(" ");

        for (int j = 0; j <= i; j++)
        {
            if (flag == 1)
            {
                printf(" ");
            }
            printf("%d", C[i][j]);
            flag = 1;
        }

        printf("\n");
    }
    return 0;
}
