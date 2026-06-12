#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    char goc_dong_bang = '@' + n - 1;
    for (int i = 1; i <= m; i++)
    {
        int da_in = 0;
        char chu_in = '@' + i - 1;
        while (chu_in <= goc_dong_bang && da_in < n)
        {
            printf("%c", chu_in);
            da_in++;
            chu_in++;
        }
        while (da_in < n)
        {
            printf("%c", goc_dong_bang);
            da_in++;
        }
        printf("\n");
    }
}
