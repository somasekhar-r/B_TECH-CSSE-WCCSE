//call by value
#include <stdio.h>
void func(int num)
{
	printf("before %d\n",num);
	num=num+100;
	printf("after %d\n",num);
}
int main()
{
	int x=100;
	printf("before function call %d\n",x);
	func(x);
	printf("after function call %d",x);
	return 0;
}

//output:
before function call 100                                                                                                                        
before 100                                                                                                                                      
after 200                                                                                                                                       
after function call 100

//call by refference
#include <stdio.h>
void func(int*num)
{
	printf("before %d\n",*num);
	*num=*num+100;
	printf("after %d\n",*num);
}
int main()
{
	int x=100;
	printf("before function call %d\n",x);
	func(&x);
	printf("after function call %d",x);
	return 0;
}

//output:
before function call 100                                                                                                                        
before 100                                                                                                                                      
after 200                                                                                                                                       
after function call 200