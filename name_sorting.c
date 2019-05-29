#include <stdio.h>
#include <string.h>

void main()
{
	//Take names as inputs
	
	char input_names[10][10];
	int i,j;
	char a[10];
	
	printf("Enter 10 names:\n");
	
	for(i=0;i<10;i++)
	{
		
		scanf("%s",&input_names[i]);
		//printf("name %d = %s\n",i,input_names[i]);
		
	}
	
	
	
	
	for(j=0;j<10;j++)
	{
		
		for(i=0;i<9;i++)
		{
			if(input_names[i][0] > input_names[i+1][0])
			{
				strcpy(a, input_names[i]);
				strcpy(input_names[i],input_names[i+1]);
				strcpy(input_names[i+1],a);
			}
			
			if(input_names[i][1] > input_names[i+1][1])
			{
				strcpy(a, input_names[i]);
				strcpy(input_names[i],input_names[i+1]);
				strcpy(input_names[i+1],a);
			}
			
		}
		
	}
	
	
	
	

	
	for(i=0;i<10;i++)
	{
		
		//scanf("%s",&input_names[i]);
		printf("name %d = %s\n",i,input_names[i]);
		
	}
	
	
	//Sort them
	
	
	//display them


}