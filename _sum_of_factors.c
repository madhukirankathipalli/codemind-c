#include<stdio.h>
int main()
{
    int n,sum=0,d,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        d=n%i;
        if(d==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}