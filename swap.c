#include<stdio.h>
int main()
{
        int a,b;
        printf("enter the number\n");
        scanf("%d %d",&a,&b);
        if(a!=b)
        {
                //a=a^b^(b=a);//swap in single line
                a=a^b;
                b=a^b;
                a=a^b;
        }
        printf("%d %d\n",a,b);
}
