#include<stdio.h>

int main()
{
	
	int input_array[10];
	int n,i,a,j;
	
	printf("Enter 10 numbers you want to sort in array: \n");
	
	for(i=0;i<10;i++)
	{
		
		scanf("%d",&input_array[i]);
	
	}
	
	printf("Numbers you entered in array:\n");	
	for(i=0;i<10;i++)
	{
		
		printf("%d \n", input_array[i]);
	
	}
	
	for(i=0;i < 10;i++)
	{
			for(j=0;j<9;j++)
			{
				
				if(input_array[j] > input_array[j + 1])
					
					{
						a = input_array[j];
						input_array[j] = input_array[j+1];
						input_array[j+1] = a;
					}
			}
			
	}

	printf("The sorted array:\n");	
	for(i=0;i<10;i++)
	{
		
		printf("%d \n", input_array[i]);
	
	}
	
	return 0;
	
}