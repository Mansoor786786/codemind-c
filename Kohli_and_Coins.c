#include<stdio.h>
int main()
{
    int vk;
    scanf("%d",&vk);
    if(vk%5!=0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",vk/10+(vk%10)/5);
    }
}