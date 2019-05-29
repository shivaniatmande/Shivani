#include <stdio.h>
#include <string.h>

void main()
{
	//Take names as inputs
	
	char input_names[10][10] = {0};
	int i,j,k;
	char a[10];
	
	printf("Enter 10 names:\n");
	
	for(i=0;i<10;i++)
	{
		
		scanf("%s",&input_names[i]);
		//printf("name %d = %s\n",i,input_names[i]);
		
	}

	

	//Sort them
	
	for(k=0;k<9;k++)
	{
		for(j=0;j<10;j++)
		{		
			for(i=0;i<9;i++)
			{
					if((k >0)&&(input_names[k][k]>input_names[k][k-1])&&(input_names[k+1][k]>input_names[k+1][k-1]))
					{
						if(input_names[i][k] > input_names[i+1][k])
						{
							strcpy(a, input_names[i]);
							strcpy(input_names[i],input_names[i+1]);
							strcpy(input_names[i+1],a);
						}
					}
					if(k==0)
					{
						if(input_names[i][k] > input_names[i+1][k])
						{
							strcpy(a, input_names[i]);
							strcpy(input_names[i],input_names[i+1]);
							strcpy(input_names[i+1],a);
						}
					}	
			}		
		}		
	}

	
	//display them
	for(i=0;i<10;i++)
	{
		
		//scanf("%s",&input_names[i]);
		printf("name %d = %s\n",i,input_names[i]);
		
	}

}