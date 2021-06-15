/*Daniel Alemu 00884794
 * CS 262, Lab Section 207
 *  * Lab 2
 *   */
#include <stdio.h>
#include <stdlib.h>

// input function
double userInput()
{
	double input;
	char buffer[50];
	fgets(buffer,50,stdin);
	sscanf(buffer,"%lf",&input);
return input;
}

// main function 
int main()
{

	double AGI,x;
	int taxRate;
	double taxOwed;
	double netIncome;

	printf("******************Tax Calculator**************!\n");

//AGI user input 	

	printf("Enter Adjested Gross income = ");
  	AGI=userInput();

//tax rate input
   
	printf("Enter Tax Rate = ");
	taxRate = (int)userInput();

// check negative inputs
 	
	if(AGI < 0 || taxRate < 0)
	   {
		printf("Program Exit.\nInvalid Input, Value must be positive number.\n"); 
	   }
	else
	   {
//tax  calculation 
    	 	x = taxRate/100.0f;
		taxOwed = x * AGI;
   	 	netIncome = AGI - taxOwed;
//output 
    		printf("Your Adjested Gross income is $%.2f \n",AGI);
   		printf("Tax Rate %d  \n",taxRate);
    		printf("You Owed $%.2f \n",taxOwed);
   		printf("Your Net Income Is $%.2f \n",netIncome); 
	   } 
   
	return 0;

}
