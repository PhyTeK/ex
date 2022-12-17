/* 
   Exercise 4

   1) Open a file "Test" and write some text inside.
   2) Read the same file and print the result on the screen
   3) Append som text at the end of file "Test" and read the file.

*/


#include <stdio.h>

int main(){
  FILE *file;
  char str[]="This is some text to write in a file named Test ...\n";
  int c;
  
  file=fopen("Test","w");
  
  fprintf(file,str);
  fclose(file);

  file=fopen("Test","r");
  
  while((c=fgetc(file)) != EOF )
    printf("%c",c);
  
  fclose(file);

  file=fopen("Test","a");
  fprintf(file,"The End");
  fclose(file);

  fprintf(stdout,"Done\n");  // Same than printf
  
  return 0;
}
