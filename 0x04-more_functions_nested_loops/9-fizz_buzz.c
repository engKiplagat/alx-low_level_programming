#include "main.h"
/**
 * main prints no from 1 to 100
 * for multiple of three prints fizz and multiple of 5 prints buzz
 * 	Return always 0
 */
int main(void)
{
	int i;
	for (i = 1 ; i <=100 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 !=0)
		{
		printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
		prinf("FizzBuzz");
		}
		else if(i == 1)
		{
		printf("%d",i);
		}
		else
		{
		printf("%d", i);
		}
	}
	printf("\n");
        return(0);
}
  
