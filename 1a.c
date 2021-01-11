//c math example
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,x,k,t,y,r1,r2,r3,r4;
    printf("enterr the values of a,b,x,k,t,y: ");
    scanf("%f,%f,%f,%f,%f,%f",&a,&b,&x,&k,&t,&y);
    r1=((a*x+b)/(a*x-b));
    printf("Result1: %f\n",r1);
    r2=(2.5*log(x))+cos(32)+(pow(x,2)+pow(y,2))+(2*x*y);
    printf("Result2:%f\n",r2);
    r3=(pow(x,5))+(10*pow(x,4))+(8*pow(x,3))+(4*x)+2;
    printf("Result3:%f\n",r3);
    r4= a*exp(k*t);
    printf("Result4:%f",r4);
}

//output:
enterr the values of a,b,x,k,t,y: 3 4 6 1 2 4                                                                                                 
Result1: 1.000000                                                                                                                             
Result2:-219.238541                                                                                                                           
Result3:2.000000                                                                                                                              
Result4:3.000000 