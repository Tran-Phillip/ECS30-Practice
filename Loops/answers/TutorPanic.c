#include <stdio.h>

int main()
{
	int SID = 0;
	int begin_time = 0;
	int end_time = 0;

	int prev_end_time = -1;
	
	while(scanf("%d %d %d", &SID, &begin_time, &end_time) == 3)
	{

		if(begin_time >= prev_end_time && begin_time >= 8)
		{
			printf("Student %d can be accomodated from %d to %d\n", SID, begin_time, end_time);
		}

		prev_end_time = end_time;
	}
}