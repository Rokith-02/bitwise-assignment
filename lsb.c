#include<stdio.h>
int main()
{
        int a;
        printf("enter the number\n");
        scanf("%d",&a);
        if(a&1==1)
        printf("LSB is set\n");
        else
        printf("LSB is not set\n");
}
