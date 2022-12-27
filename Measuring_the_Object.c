#include<stdio.h>
int main()
{
    int i,w,x,y,z,n=0;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    for(i=1;i<=3;i++)
    {
        if(w==x||w==y||w==z)
        {
            n=1;
        }
        else if(w==x+y||w==y+z||w==z+x)
        {
            n=2;
        }
        else if(w==x+y+z)
        {
            n=3;
        }
    }
    if(n==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}