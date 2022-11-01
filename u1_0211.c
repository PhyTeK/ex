/*
Exercise: Write a mini game for guessing number 
between 1 to 100
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
srand(time(0));
int num=rand()%100;
int n,count=1;

do{ 
    printf("Guess a number between 1 to 100\n");
    ??????????
    if(n>num){
        printf("Enter a smaller number!!!!\n");
    }
    else if(n<num){
        printf("Enter a greater number!!!!\n");
    }
    else
      printf("You got it right %d after %d attempts!!!!\n",num,count);

    ??????
    printf("***********************************************\n");
}
while(??????);

 return 0;
}
