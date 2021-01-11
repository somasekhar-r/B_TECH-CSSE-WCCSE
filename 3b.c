//Fibonacci sequence for N numbers using do-while loop.
#include<stdio.h>
int main()
{
	int i=1,num,t1=1,t2=1,temp=0;
	printf("enter a positive number:");
	scanf("%d",&num);
	do
	{
		i++;
		printf("%d  ",temp);
		t1=t2;
		t2=temp;
		temp=t1+t2;
	}
	while(i<=num);
	return 0;
}

//output:
enter a positive number:10                                                                                                                                                                           
0  1  1  2  3  5  8  13  21  34 