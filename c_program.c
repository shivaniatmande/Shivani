#include<stdio.h>

/* Dubbu's main function :-) */
int main()
{
	/*Declaring a varibale which will store the word. */
	 char input_data[100];
	 char input_character = 'a';
	 int counter = 0;
	 
	/*Now similarly ask the user for a letter below.
	  keep in mind you will have to declare a new variable*/	
	 printf("Enter a character you need to search for : ");
	 scanf("%c",&input_character);
	 printf("The character you entered is %c\n",input_character);
	
	/*Asking the user for the word as input and then storing
	  it in the varible input data declared earlier. */	
	 printf("Enter a word : ");
	 scanf("%s",input_data);
	 printf("The word you entered is %s \n",&input_data);

	
	/*Now lets write the main algorithm, 
	  we need to find out how many times that letter occured in that word. */
	  
	/*HINT : iterate through the entire word using for loop
	  and then compare each time if the letter matches , then increment counter 
	  if it matches ,you'll have to take a new variable for the counter*/
	for(int i = 0;input_data[i] != '\0';i++)
	{
		if(input_data[i] == input_character)
		{
			counter++;
		}
	}
	
	/*finally print the counter*/ 
	printf("Number of times the letter occures %d \n",counter); 
	
	
	return 0;
}