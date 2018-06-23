#include <stdio.h>


int main()
{
  int sum = 0;
  int number = 0;
  
  while(number != -1)
  {
    
    printf("Please input a number (-1 to end program): ");
    scanf(" %d", &number);

    if(number % 2 == 0)
    {
      sum += number;
    }
  
  }

  printf("Your total sum is: %d\n", sum);

  return 0;
}