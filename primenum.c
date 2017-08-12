#include <stdio.h>
int main()
{
    int m, n, i, f;
    scanf("%d %d", &m, &n);

    printf("Prime numbers between %d and %d are: ", m, n);

    while (m < n)
    {
        f= 0;

        for(i = 2; i <= m/2; ++i)
        {
            if(m% i == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
            printf("%d ", m);

        ++m;
    }

    return 0;
}
