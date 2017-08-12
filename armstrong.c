 #include<stdio.h>
int main(){
    int num,r,s=0,t;
    scanf("%d",&num);
    t=num;
    while(num!=0){
         r=num%10;
         num=num/10;
         s=s+(r*r*r);
    }
    if(s==t)
         printf("%d is an Armstrong number",t);
    else
         printf("%d is not an Armstrong number",t);

    return 0;
}
