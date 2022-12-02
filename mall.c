#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Student{
  char namn[10];
  short int age;
  struct Student *k1,*k2;
};
  
int main(){
  struct Student *pbr;

  pbr = (struct Student*)malloc(100*sizeof(struct Student));  // malloc(size in bytes allocated in RAM);

  if(pbr == NULL)
    return 1;

  
  strcpy(pbr[0].namn,"Richie");
  strcpy(pbr[1].namn,"Linux");

  pbr[0].k1=&pbr[1];
  pbr[1].k2=&pbr[0];
  
  pbr[0].k1->age=32;
  strcpy(pbr[0].k2->namn,"Dennis");
  pbr[0].age=80;
  pbr[1].age=61;

  //printf("%s %d %d %s\n",pbr[0].namn, pbr[0].age,pbr[0].k1->age, pbr[0].k2->namn);
  printf("%s %d %p\n",pbr[0].namn, pbr[0].age,&pbr[0]);
  printf("%s %d %p\n",pbr[1].namn, pbr[1].age,&pbr[1]);
  
  free(pbr);
  return 0;
}
