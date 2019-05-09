#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int count = 0;
	printf("Hello Dubbu :-) \n");
	printf("Give a large number as input : ");
	scanf("%d",&a);
	printf("the number you have entered is : %d\n",a);
	
	printf("Enter a number to search : ");
	scanf("%d",&b);
	printf("the number to search for : %d\n",b);
	
	// while(a != 0)
	// {
		// int p = 0,q = 0;
		// p = a % 10;
		// if(p == b)
		// {
			// count++;
		// }
		// a = a/10;		
	// }
	
	int i = 0;
	for(i = 0;a != 0 ;i++)
	{
		int p = 0,q = 0;
		p = a % 10;
		if(p == b)
		{
			count++;
		}
		a = a/10;		
	}
	
	
	printf("Count = %d\n",count);
	
	return 0;
}
