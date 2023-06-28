// Online C compiler to run C program online
#include <stdio.h>
void seat_allocater(int num,int seat,int magic_no_1,int inc_1,int inc_2,int dec_1,int dec_2)
{
            (seat==1)?printf("Window Seat\n"):(seat==2)?printf("Middle Seat"):printf("Corner Seat");
            int x=(num%12==0)?(num/12)-1:(num/12);
            int final_modulo=6+(12*x);
            int modulo=num%6;
            if(num<=final_modulo)
            {

                if(modulo==magic_no_1)
                    num+=inc_1;
                else
                    num+=inc_2;
            }
            else
            {
                 if(modulo==magic_no_1)
                    num-=dec_1;
                else
                    num-=dec_2;
            }
            printf("The Opposite Seat Number Is %d",num);
}
int main()
{
    int num=0;
    while(num!=-1){
   printf("\nEnter The Num:");
   scanf("%d",&num);
   int modulo=num%6;
   int option=(modulo==0 || modulo==1)?1:(modulo==2 || modulo==5)?2:3;
   int x,final_modulo;
   switch(option)
   {
       case 1:
           seat_allocater(num,1,1,11,1,1,11);
            break;
        case 2:
            seat_allocater(num,2,2,9,3,3,9);

            break;
        case 3:
            seat_allocater(num,3,3,7,5 ,5,7);
            break;

   }
    }

}

