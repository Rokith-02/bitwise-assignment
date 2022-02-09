#include<stdio.h>
int main()
{
        int a=0,pos;
        printf("enter the pos\n");
        scanf("%d",&pos);
        int n=(1<<pos)|a;
        printf("%d",n);
}
