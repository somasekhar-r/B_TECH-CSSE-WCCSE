//program
#include <stdio.h>
int main()
{
   float amount;
    printf("enter sales amount:\n");
    scanf("%f",&amount);
    if(amount<5000)
    {
        printf("sorry commission is not available");
    }
    else if(amount<5000&&amount<=10000)
    {
        printf("commission amount:%f \n",(amount/100*2));
    }
    else
    {
        printf("commission amount:%f \n",(amount/100*5));
    }
    return 0;
}
//output:
//enter sales amount:                                                                  
//5600                                                                                 
//commission amount:280.000000 