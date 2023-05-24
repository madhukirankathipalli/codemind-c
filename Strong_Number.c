#include<stdio.h>
int main()
{
    int n,i,fac,s=0,t,r;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        i=1,fac=1;
        r=n%10;
        while(i<=r)
        {
            fac=fac*i;
            i++;
        }
        s=s+fac;
        n=n/10;
        
    }
    if(s==t)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
}