#include<stdio.h>
#include<stdlib.h>	
#include<ctype.h>
#include<string.h>
#include<math.h>


int main()
{
	int i;
	int meatBalls[5];
	int totalBalls = 0;

	for (i = 0; i < 5; i++) {

	/*So here 0< 5 so goes to print statment to execute code block. It iterates 5 times to ask question each day*/
		printf("How many meatballs did you eat on day %d? \n", i+1);
	/*So here comp looks to i which is at first set to 0 and adds 1 to it to make it day 1 (i+1 --> 0+1)*/
	//This sentence prints to this to screen: How many meatballs did you eat on day 1?
		scanf_s("%d", &meatBalls[i]);	
		//This loops 5 times before moving to next control statment (for loop)
	}

	for (i = 0; i < 5; i++) {
		//After user enters data
		//This accesses the array and "meatBalls" to store data from equation in memory
		//0<5 so:
		totalBalls += meatBalls[i];
		//First iteration: totalBalls = 0 + meatBalls (user entry - lets say 2 for first day for example
		//totalBalls = 0 + 2= 2 meatballs on first day.  Next day example is user enters 3 so
		//totalBalls = 2+3 = 5 Five total balls on 2nd day.  This needs to loop 5 times to get true total balls
		//iterates 5 times with next 3 days being. 10, 5 and 5 so the total is 30.  The loop finally iterates to 
		//4++ which is 4 +1 = 5 sp 5<5? False exits for loop to go onto next step which is averaging the meatBalls
	}

	int avg = totalBalls / 5; //This take the informaiton stored int total balls variable by 5 (since 5 days/iterations
	printf("You ate %d meatballs total, that an average of %d per day! \n", totalBalls, avg);
	//Here 1st %d looks to totalBalls variable where that "total" info is stored
	//Here 2nd %d looks to avg variable with the solusiton to that equation is stored 

	return 0;
}
