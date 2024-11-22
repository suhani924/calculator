#include<stdio.h>

void add();
void subtraction();
void division();
void modulo();
void multiplication();



void main()
{
	int num1,num2,choice,answer;
	
	printf("\nEnter 1 for'+'\n Enter 2 for '-'\n Enter 3 for'*'\n Enter 4 for'/'\n Enter 5 for'%%'\n Enter 0 for'Exit' ");
	
    printf("\nEnter your choice: ");
	scanf("%d",&choice);

	printf("Enter num1: ");
	scanf("%d",&num1);

	printf("Enter num2: ");
	scanf("%d",&num2);
 
    switch(choice)
    {
        case 1:
	    printf("Output = %d",num1 + num2);
	    break;

	    case 2:
	    printf("Output = %d",num1 - num2);
	    break;

	    case 3:
	    printf("Output = %d",num1 * num2);
	    break;

	    case 4:
	    printf("Output = %d",num1 / num2);
	    break;

	    case 5:
	    printf("Output = %d",num1 % num2);
	    break;

	    case 0:
	    printf("wrong choice...");
	    break;
    }
        
	
}