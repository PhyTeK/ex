/*
  Exercise 3:
  
  As the previous exercise
  
  1) Ask the user to enter the day of the week (1-7)
  2) Using an enum print the corresponding number of the weekday.

*/


#include <stdio.h>
#include <string.h>

int main(){

  enum week {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
  enum week day;

  for(day=Monday;day<=Sunday;day++)
    printf("%d ",day);

  puts("");
  
    /* Input week number from user */
    printf("Enter week number(1-7): ");
    scanf("%d", &day);
    
    switch(day)
    {
        case Monday:
            puts("Monday");
            break;
        case Tuesday:
            puts("Tuesday");
            break;
        case Wednesday:
            puts("Wednesday");
            break;
        case Thursday:
            puts("Thursday");
            break;
        case Friday:
            puts("Friday");
            break;
        case Saturday:
            puts("Saturday");
            break;
        case Sunday:
            puts("Sunday");
            break;
        default:
            puts("Invalid input! Please enter week number between 1-7.");
    }

    return 0;
}

