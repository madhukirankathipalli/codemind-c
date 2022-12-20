#include<stdio.h>
int main()
{
    int n,sq,s=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        s=s+sq%10;
        sq/=10;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}