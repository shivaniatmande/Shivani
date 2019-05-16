#include<stdio.h>

int add(int a,int b)
{
	int c;
	c = a+b;
	return c;
}

void shivani()
{
	int input_array[100];
	int first,second,answer,i;
	
	printf("Enter 10 names:\n");
	
	for(i=0;i<=10;i++)
	{
		
	scanf("%s \n",&input_array[i]);
	
	}
	printf("Names you entered are:\n");
	
	for(i=0;i<=10;i++)
	{
		
	printf("%s \n",&input_array[i]);
	
	}
	
	
	first  = 10;
	second = 20;
	answer = add(first,second);
	printf("answer = %d\n",answer);

}


int main()
{
	shivani();
}