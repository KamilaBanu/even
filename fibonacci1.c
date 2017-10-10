#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, nxt = 0, n;
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nxt= t1 + t2;
    while(nxt<= n)
    {
        printf("%d, ",nxt);
        t1 = t2;
        t2 = nxt;
        nxt= t1 + t2;
    }
    
    return 0;
}
