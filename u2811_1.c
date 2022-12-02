/*
  Exercise doloop

  Write a login program that ask for a username and a password and
  write "welcome" if both are correct (same as hiden username and
  password).  Or "Try again" max 3 times if they are different with
  the hiden username or password.

*/

#include <stdio.h>
#include <string.h>
#define MAXTRY 4

int main(){
  int n=0,count=0;
  char user[20];
  char pass[20];
  do{
    puts("Enter your username:");
    scanf("%s",&user);
    //tolower(user);
    if(!strcmp(user,"richie") ){
      count=0;
      do{
	puts("Enter your password:");
	scanf("%s",&pass);
	if(!strcmp(pass,"secret")){
	  printf("Welcome %s\n",user);
	  return 0;
	}else{
	  printf("Try again!\n");
	  count++;
	}
      }while(count<MAXTRY);
    }else{
      puts("Not such user!");
      count++;
    }
  }while(count<MAXTRY);

  return 0;
}
