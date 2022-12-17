/*

  Exercise 2:

  1) Ask the user to enter a week number (1-7)
  We assume that the first day of the week is a Monday
.
  2) Using a switch print the corresponding day of the week.


  INPUT

  2

  OUTPUT

  Tuesday

*/


#include <stdio.h>

int main()
{
    int week;

    /* Input week number from user */

    printf("Enter week number(1-7): ");
    scanf("%d", &week);

    switch(week)
    {
        case 1:
	    puts("Monday");
            break;
        case 2:
            puts("Tuesday");
            break;
        case 3:
            puts("Wednesday");
            break;
        case 4:
            puts("Thursday");
            break;
        case 5:
            puts("Friday");
            break;
        case 6:
            puts("Saturday");
            break;
        case 7:
            puts("Sunday");
            break;
        default:
            puts("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}
