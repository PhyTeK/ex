#include <iostream>
#include <fstream>

using namespace std;

int main () {
  ofstream file;
  file.open("egone.txt");
  file << "Writing to a file in C++....";
  file.close();
  return 0;
}

