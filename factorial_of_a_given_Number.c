#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return(n*fact(n-1));
}
int main()
{
    int num,factorial;
    scanf("%d",&num);
    factorial=fact(num);
    printf("%d",factorial);
    return 0;
}