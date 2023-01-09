#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n/=10;
        s=s+r;
        if(n==0 && s>9)
        {
            n=s;
            s=0;
        }
    }
    printf("%d",s);
}