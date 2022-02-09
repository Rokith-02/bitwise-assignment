#include<stdio.h>
int main()
{
        int a=7,pos;
        printf("enter the position to clear\n");
        scanf("%d",&pos);
        a=a&~(1<<pos);
        printf("%d\n",a);
}
