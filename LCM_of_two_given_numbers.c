#include<stdio.h>
int main()
{
    int n1,n2,d;
    scanf("%d%d",&n1,&n2);
    d=n1>n2 ? n1:n2;
    while(1)
    {
        if((d%n1==0)&&(d%n2==0))
        {
            printf("%d",d);
            break;
        }
    d++;
    }
    return 0 ;
}