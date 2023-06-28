#include<stdio.h>
void main()
{
    float units;//1
    printf("\nEnter Units:");
    scanf("%f",&units);
    printf("\n");
    float cost=0.0;
    if(units<200.0)
    {
        printf("No Need To Pay Anything:");
        exit(0);
    }
    if(units>200.0) units-=200.0;

    if(units>0 && units<=200)
    {
        cost=units*1.5;
        units=0;
    }
    if(units>200){
        cost=200*1.5;
        units-=200;
    }
    if(units>0 && units<=200)
    {
        cost+=units*3.0;
        units=0;
    }
    if(units>200.0){
        cost+=200*3.0;
        units-=200;
    }
    if(units>0 && units<=300)
    {
        cost+=units*5.0;
        units=0;
        printf("7 UNITS=%f Cost=%f\n",units,cost);
    }
    if(units>300.0){
        cost+=300*5.0;
        units-=300;
    }
    if(units>0 && units<=600)
    {
        cost+=units*10.0;
        units=0;
    }
    if(units>600){
        cost+=600*10.0;
        units-=600;
    }
    if(units>0)
    {
        printf("%d",units);
        cost+=units*25.0;
    }
    cost=cost+(cost*0.18);
    printf("The Bill Is %f",cost);

}
