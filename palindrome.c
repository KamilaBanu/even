    #include <stdio.h>
void main()
{
    int n, temp, rem, rev= 0;
 printf("Enter an integer \n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem= n% 10;
        rev = rev* 10 + rem;
        n/= 10;
    }

    printf("%d\n", temp);
    printf("%d\n", rev);
    if (temp == rev)
        printf("Number is a palindrome \n");
    else
        printf("Number is not a palindrome \n");

}
