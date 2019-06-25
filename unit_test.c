#include<stdio.h>
#include"header.h"


void test_case_1()
{
	int a,b,c;
	a = 1;
	b = 2;
	
	c = add(a,b);
	printf("add = %d\n",c);
	c = sub(a,b);
	printf("sub = %d\n",c);
	c = mul(a,b);
	printf("mul = %d\n",c);
}	

void test_case_2()
{
	int a,b,c;
	a = -1;
	b = 2;
	
	c = add(a,b);
	printf("add = %d\n",c);
	c = sub(a,b);
	printf("sub = %d\n",c);
	c = mul(a,b);
	printf("mul = %d\n",c);
}	
void test_case_3()
{
	int a,b,c;
	a = -1;
	b = -2;
	
	c = add(a,b);
	printf("add = %d\n",c);
	c = sub(a,b);
	printf("sub = %d\n",c);
	c = mul(a,b);
	printf("mul = %d\n",c);
}	
void test_case_4()
{
	long a,b,c;
	a = 1000;
	b = 300000;
	
	c = add(a,b);
	printf("add = %d\n",c);
	c = sub(a,b);
	printf("sub = %d\n",c);
	c = mul(a,b);
	printf("mul = %d\n",c);
}	
void main()
{
	//test_case_1();
	//test_case_2();
	//test_case_3();
	test_case_4();
	
}

