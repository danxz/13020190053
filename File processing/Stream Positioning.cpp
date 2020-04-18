#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(void){
   string buf="ABCD EFGH HIJK";
   fstream file;
   // Uncheck this if file doesn't already exist
   // file.open ("testfile.dat", ios::out | ios::binary);
   // file.close();
   file.open ("testfile.dat", ios::out |
      ios::in | ios::binary);
   if(!file.is_open()){
      cerr<<"Error opening file!!"<<endl;
      exit(1);
   }
   file.write(reinterpret_cast<char *>(&buf),buf.size());
   file.seekg(0,ios::end);
   cout<<"size = "<<file.tellg()<<endl;
   file.seekg(0,ios::beg);
   file.read (reinterpret_cast<char *>(&buf),buf.size());
   cout<<buf<<endl;
   file.close();
   return 0;
}
