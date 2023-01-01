#include<stdio.h>
int main()
{
    int n,i,x,a,b;
    scanf("%d%d%d%d",&n,&a,&b,&i);
    for(i=a;i<=b;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}