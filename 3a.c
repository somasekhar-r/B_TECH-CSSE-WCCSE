//Prime numbers between 1 to N using while loop
#include <stdio.h>
int main()
{
    int i=1,num,count;
    printf("enter num:");
    scanf("%d",&num);
    while(i<=num)
    {
        count=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && i!=1)
        {
            printf("%d  ",i);
        }
    i++;
	}
    return 0;
}

//output:
//enter num:25                                                                                                                                
//2  3  5  7  11  13  17  19  23