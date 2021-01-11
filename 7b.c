// Pointer Program to swap two numbers without using the 3rd variable.
#include<stdio.h>  
int main(){
    int n1,n2;
    int *p1=&n1,*p2=&n2;  
    printf("enter number1:");
    scanf("%d",&n1);
    printf("enter number2:");
    scanf("%d",&n2);
    printf("Before swap:num1=%d num2=%d",n1,n2);  
    *p1=*p1+*p2;  
    *p2=*p1-*p2;  
    *p1=*p1-*p2;  
    printf("\nAfter swap: num1=%d num2=%d",*p1,*p2);  
return 0;  
}  

//output:
enter number1:45                                                                                                                                
enter number2:32                                                                                                                                
Before swap:num1=45 num2=32                                                                                                                     
After swap: num1=32 num2=45