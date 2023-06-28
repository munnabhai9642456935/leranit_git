#include<stdio.h>
int main()
{
    int units;
    printf("Enter The Units Consumed:");
    scanf("%d",&units);
    float cost=0;
    if(units<=200.0)
    {
        printf("No Need TO Pay Anything:");

    }
    if(units>200.0)
    {

        cost+=(units>=400)?200.0*1.5:(units%200)*1.5;

    }
    if(units>400)
    {
         cost+=(units>=600)?200.0*3.0:(units%200)*3.0;
    }
    if(units>600)
    {
       cost+=(units>=900)?300.0*5.0:(units%300)*5.0;

    }
    if(units>900)
    {
        cost+=(units>=1500)?600.0*10.0:(units%600)*10.0;
    }
    if(units>1500)
    {
        cost+=(units-1500)*25.0;
    }
    printf("Electricity Bill Without Tax For %d Units Is %f",units,cost);
    cost=cost+(cost*0.18);
    printf("Electricity Bill With Tax For %d Units Is %f",units,cost);
}
