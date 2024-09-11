#include<stdio.h>
int main()
{
    int max,i,sume=0,sumo=0;
    printf("even numbers - ");
    for(int i=1;i<=20;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
            sume=sume+i;
        }
    }
    printf("\nSum = %d ",sume);

    printf("\nodd numbers - ");
    for(int p=1; p<=20; p++)
    {
        if(p%2==1)
        {
            printf("\n%d",p);
            sumo=sumo+p;
        }
    } printf("\nSum = %d ",sumo);
}
