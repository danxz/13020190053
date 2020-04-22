#include <iostream>
#include <fstream>
using namespace std;
 
int main () {
  ofstream file;
  file.open ("WritingFile.txt");
  file << "Saya Belajar Membuat File\nSaya Belajar Membuka File ";
  file.close();
  return 0;
}
