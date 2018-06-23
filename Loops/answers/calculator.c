#include <stdio.h>

int main()
{
	int choice = -1; 
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	while(choice != 0)
	{
		
		printf("0. End Program\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("Please enter a choice: ");
		scanf(" %d", &choice);

		if(choice >= 1)
		{
			printf("Please enter the first number followed by the second number: ");
			scanf(" %d %d", &num1, &num2);
			switch(choice)
			{
				case 1 :
					result = num1 + num2;
					break;
				case 2 : 
					result = num1 - num2;
					break;
				case 3 : 
					result = num1 * num2;
					break;
				case 4 :
					result = num1 / num2;
					break; 
			}
			printf("The result is: %d\n", result);
		}
		else if (choice == 0)
		{

			break;
			
		}
		else
		{

			printf("Error: Invalid Choice\n");
			return 1;

		}
	}

	return 0;
}
