#include<stdio.h>
#include<string.h>


int stringcompare(const char * s1, const char * s2)
{
    for(; *s1 == *s2; ++s1, ++s2)
        if(*s1 == 0)
            return 0;
    return *(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1;
}


/* int stringcompare(char * s1,char * s2)
{
	while(*s1 == *s2)
	{
		if(*s1 == 0)
		{
			return 0;
		}
		s1++;
		s2++;		
	}
	
	if(*s1 > *s2)
	{
		return 1;
	}
	if(*s1 < *s2)
	{
		return -1;
	}	
	
} */





void main()
{
	char input[10][10] = {0};
	char swap[10] = {0};
	int i,j,k;

	printf("enter 10 names:\n");
	for(i=0;i<10;i++)
	{
		scanf("%s",&input[i]);
	}

	
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(stringcompare(input[j],input[j+1]) > 0)
			{
				strcpy(swap,input[j]);
				strcpy(input[j],input[j+1]);
				strcpy(input[j+1],swap);
			}

		}
	}
	
	printf("sorted names:\n");	
	
	for(i=0;i<10;i++)
	{	
		printf("%s\n",input[i]);
	}
	
	
}