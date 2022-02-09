#include<stdio.h>
int main()
{
        int a;
        printf("enter the number\n");
        scanf("%d",&a);
        a=1<<31&a;
        if(a==0)
        printf("MSB is not set\n");
        else
        printf("MSB is set\n");//2147483648

}
