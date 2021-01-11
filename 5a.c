//factorial of a given number using recursion.
#include <stdio.h>
int func(int num);
int main()
{
	int num;
	printf("enter a positve number:");
	scanf("%d",&num);
	printf("factorial of %d=%d",num,func(num));
	
	return 0;
}
int func(int num)
	{
		for(int i=1; i<=num; i++)
		{
			return num*func(num-1);
		}
	}

//output:
enter a positve number:6                                                                                                                      
factorial of 6=720