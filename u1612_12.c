/*
  Exercise 12: 
 Pointers in Structures


*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Box{
  int id;
  char name[20];
  char *user; //Dangling pointer
  char *pass;
};

int main(){
  struct Box b1,b2;

  b1.id=123;
  b2.id=345;

  strcpy(b1.name,"Dennis");
  strcpy(b2.name,"Ritchie");
  b1.user=&b1.name[0];
  
  //b1.user=(char *)malloc(20*sizeof(char));
  b2.user=(char *)malloc(20*sizeof(char));

  strcpy(b1.user,"Dennis");
  strcpy(b2.user,"Ritchie");
  
  b1.pass="Dennis2";
  b2.pass="Ritchie2";

  puts(b1.user);
  puts(b2.user);
  puts(b1.pass);
  puts(b2.pass);
  
  //free(b1.user);
  free(b2.user);

  return 0;
}

