//Addition and Multiplication of two matrices
#include <stdio.h>
int main()
{
	int r,c,r2,c2;
	int m1[100][100],m2[100][100],tsum=0,mul[100][100],sum[100][100];
	printf("enter the no.of rows,columns of 1st matrix:\n");
	scanf("%d %d",&r,&c);
	printf("enter the elements of 1st matrix\n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d", &m1[i][j]);
		}
	}
	printf("enter the no.of rows,columns of 2nd matrix:\n");
	scanf("%d %d",&r2,&c2);
	printf("enter the elements of 2nd matrix\n");
	for(int i=0; i<r2; i++)
	{
		for(int j=0; j<c2; j++)
		{
			scanf("%d", &m2[i][j]);
		}
	}
	if(c!=r2)
	{
		printf("multiplication not possible\n");
	}
	else
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c2; j++)
		{
			for( int k=0; k<r2; k++)
			{
				tsum=tsum+m1[i][k]*m2[k][j];
			}
		mul[i][j]=tsum;
		tsum=0;
		}
	}
	printf("product of matrices:\n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c2; j++)
		{
			printf("%d\t", mul[i][j]);
		}
		printf("\n");
	}
	if(r!=r2 && c!=c2)
	{
		printf("addition not possible\n");
	}
	else
	printf("addition of matrices:\n");
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			sum[i][j]=m1[i][j]+m2[i][j];
			printf("%d\t", sum[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}

//output:
enter the no.of rows,columns of 1st matrix:                                                                                                                                    
3 3                                                                                                                                                                            
enter the elements of 1st matrix                                                                                                                                               
12 2 3                                                                                                                                                                         
1 4 5                                                                                                                                                                          
1 5 8                                                                                                                                                                          
enter the no.of rows,columns of 2nd matrix:                                                                                                                                    
3 3
enter the elements of 2nd matrix                                                                                                                                               
4 5 2                                                                                                                                                                          
1 6 3                                                                                                                                                                          
2 9 1                                                                                                                                                                          
product of matrices:                                                                                                                                                           
56      99      33                                                                                                                                                             
18      74      19                                                                                                                                                             
25      107     25                                                                                                                                                             
addition of matrices:                                                                                                                                                          
16      7       5                                                                                                                                                              
2       10      8                                                                                                  
3       14      9  