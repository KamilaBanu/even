#include<stdio.h>
#include<math.h>
int main()
{
   int i=1, x, n, result=1;
   scanf("%d \n %d",&x, &n);
   result= pow (x,n);
   printf("%d to the power %d is %d", x, n, result);
   return 0;
}
