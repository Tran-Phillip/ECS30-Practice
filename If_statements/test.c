#include <stdio.h>
int main()
{
int age = 0;
int attractiveness = 0;
char sex = '0';
scanf("%d ", &age);
scanf("%d ", &attractiveness);
scanf("%c", &sex);
if(age > 18)
{
if(sex == 'F')
{
printf("Its a match!");
}
else{
printf("Look elsewhere");
}
}
else if(attractiveness >7 && age >18)
{
printf("It’s a match!...for one of you at least");
}
}