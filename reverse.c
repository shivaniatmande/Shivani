#include<stdio.h>

int main()
{
	
	char input_array[100];
	char reverse_array[100];
	
	int length,start,end;
	int i=0;

	
	printf("Enter string you want to reverse:\n");
	scanf("%s",&input_array);
	printf("The string you entered:%s \n",input_array);
	
	for(i=0;input_array[i] != '\0';i++)
	{
		length++;
	}
	
	printf("Length of array: %d \n",length);
	
	end = length -1;
	printf("Length of array: %d \n",end);
	
	for(start=0;start < length;start++)
	{
		
		reverse_array[start] = input_array[end];
		end--;
		
	}
	
	printf("The reversed string: %s\n",reverse_array);
	
	return 0;
}