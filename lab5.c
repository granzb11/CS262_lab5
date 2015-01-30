#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, count; //Declaring variables <corrected version>
	//int i, count  //Declaring variables
	//int sum = 0;
	int sum;//<corrected version>

	printf("Enter an integer -> ");
	//scanf("%d", count); //This is not passing the address, we need to use &
	scanf("%d", &count); //<corrected version>

	//for (i == 0; i < count; i++); //cannot initialize i using ==
	//for(i=0; i<count; i++); // <correct version>
	//for(i=0; i<count; i++) //<second corrected version>
	for(i=0; i<=count; i++)
	{
		//sum = count; //this is not adding up any numbers, just assigning sum to count
		sum += i; //<corrected version>
		printf("i=%d sum= %d\n" ,i, sum); //Added for Debugging
	}

	printf("The sum of integers 0 to %d is: %d\n", count, sum);

	return 0;
}
