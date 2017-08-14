#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, nx = 0, n;
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nx= t1 + t2;
    while(nx<= n)
    {
        printf("%d, ",nx);
        t1 = t2;
        t2 = nx;
        nx= t1 + t2;
    }
    
    return 0;
}
