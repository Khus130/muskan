#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,n,sum=0;
  scanf("%d",&n);
  for(int i=1; i<=n; i++)
  {
      if(n%i==0)
        sum++;
  }
  if(sum==2)
    printf("%d prime number",n);
  else
    ("%d not a prime number",n);

}
