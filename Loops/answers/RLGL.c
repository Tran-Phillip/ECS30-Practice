#include <stdio.h>

int main()
{

	char command = '0';
	char current_state = '0';	
	printf("Enter the set of commands: ");

	while(scanf("%c", &command) != 0 && command != '\n') //scanf will prompt the user for input no matter where it is in the code
	{													 //The newline is techincally a character, we need to make sure we dont accidently scan it.
		if(command == 'G')
		{
			printf("Running!!!\n");
		}
		else if(command == 'R')
		{
			printf("FREEZE!\n");
		}
		else
		{
			printf("Error: Command not G or R\n");
			return 1;
		}

		current_state = command; //update the current state to be whatever the command was
	}

	if(current_state == 'G')
	{
		printf("You Win!\n");
	}
	else if(current_state == 'R')
	{
		printf("You didn't win yet!\n");
	}

	return 0;
}