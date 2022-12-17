/* Exercise 7
   C++ Strings

   1) Create a string "Hello" in an array named greeting. 
      The last character of the array should be '\0'.
   2) Print the array on the screen
   3) Concatanate two strings; str1="Hello" and str2=" World!"
   4) Copy str2 to str1
   5) Print the adress of str1
   6) Compare two strings: Which of the following strings is greater:
      "Hello", World"?

*/


#include <iostream>
#include <string>

using namespace std;

int main () {

  char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};  // C-style
   //   char greeting[] = "Hello";
   string str1,str2;   // C++ style
   str1="Hello";
   str2=" World!";
     
   cout << greeting << endl;
   cout << str1 << str2 << endl;
   cout << str1 + str2 << endl;
   cout << str1.size() << endl;
   str2 = str1;
   cout << str1 + " " << str2 << endl;

   cout << "Address of str1: ";
   cout << &str1 << endl;
   str1="Hello";
   str2="World";
   if (str1 > str2)   // Dictionary order a<b<c ... <w
     cout << "str1 is greater than str2" << endl;
   else
     cout << "str2 is greater than str1" << endl;

   return 0;
}
