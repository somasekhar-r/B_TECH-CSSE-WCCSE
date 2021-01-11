//dynamic memory allocation function example
#include <stdio.h>
int main(){
	int i;
	int count;
	int *arr;
	int sum = 0;
	printf("Enter the total number of elements you want to enter : ");
	scanf("%d",&count);
	arr = (int *)malloc(count * sizeof(int));
	for(i = 0;i<count;i++){
		printf("Enter element %d : ",(i+1));
		scanf("%d",arr+i);
		sum += *(arr+i);
	}
	printf("sum is %d \n",sum);
	free(arr);
	return 0;
}

//output:
Enter the total number of elements you want to enter : 5                                                                                        
Enter element 1 : 34                                                                                                                            
Enter element 2 : 54                                                                                                                            
Enter element 3 : 12                                                                                                                            
Enter element 4 : 32                                                                                                                            
Enter element 5 : 65                                                                                                                            
sum is 197  