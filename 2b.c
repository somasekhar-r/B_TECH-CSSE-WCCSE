//sum of n digits
#include <stdio.h>
int main()
{
    int Num,sum=0;
    printf("enter positive integer:\n");
    scanf("%d",&Num);
    for(int i=0; Num>0; i++)
    {
      sum=sum+Num%10;
      Num=Num/10;
    }
    printf("sum is:%d",sum);
    return 0;
}

//output:
//enter positive integer:                                                                                                                       
//45673                                                                                                                                         
//sum is:25      
