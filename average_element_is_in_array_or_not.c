#include<stdio.h>
int main()
{
    int s=0,n,i,av;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }

    av=s/n;
    int count=0;
      for(i=0;i<n;i++)
      {
          if(av==a[i])
          {
              count=1;
              break;
              
              
          }
      }
      if(count==1)
      {
          printf("True");
      }
      else
      {
          printf("False");
      }
}
