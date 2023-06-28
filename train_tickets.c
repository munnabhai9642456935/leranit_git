// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num=0;
    while(num!=-1){
   printf("\nEnter The Num:");
   scanf("%d",&num);
   int modulo=num%6;
   int option=(modulo==0 || modulo==1)?1:(modulo==2 || modulo==5)?2:3;;
   int x,final_modulo;
   switch(option)
   {
       case 1:
            printf("Window Seat");
            x=(num%12==0)?(num/12)-1:(num/12);
            final_modulo=6+(12*x);
            printf("\n%d %d",modulo,final_modulo);
            if(num<=final_modulo)
            {

                if(modulo==1)
                    num+=11;
                else
                    num+=1;
            }
            else
            {
                 if(modulo==0)
                    num-=11;
                else
                    num-=1;
            }
            printf("The Opposite Seat Number Is %d",num);
            break;
        case 2:
            printf("Middle Seat");
            x=(num%12==0)?(num/12)-1:(num/12);
            final_modulo=6+(12*x);
            printf("\n%d %d",modulo,final_modulo);
            if(num<=final_modulo)
            {

                if(modulo==2)
                    num+=9;
                else
                    num+=3;
            }
            else
            {
                 if(modulo==2)
                    num-=3;
                else
                    num-=9;
            }
            printf("The Opposite Seat Number Is %d",num);
            break;
    case 3:
            printf("Corner Seat");
            x=(num%12==0)?(num/12)-1:(num/12);
            final_modulo=6+(12*x);
            printf("\n%d %d",modulo,final_modulo);
            if(num<=final_modulo)
            {

                if(modulo==3)
                    num+=7;
                else
                    num+=5;
            }
            else
            {
                 if(modulo==3)
                    num-=5;
                else
                    num-=7;
            }
            printf("The Opposite Seat Number Is %d",num);
            break;

   }

    }
}
