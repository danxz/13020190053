#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(void){
   ofstream ofile;
   // Opening file for writing
   ofile.open ("testfile.dat");
   if(ofile.is_open()){
      ofile << "this line will be written
         into testfile.dat."<<endl;
      ofile << "this line also will be written
         into testfile.dat."<<endl;
      ofile.close();
   }else{
      cerr<<"Error opening file!!"<<endl;
   }
   string buf;
   // Opening file for reading
   ifstream ifile;
   ifile.open("testfile.dat");
   if(ifile.is_open()){
      while(getline(ifile,buf))
      cout<<buf;
      ifile.close();
   }else{
      cerr<<"Error opening file!!"<<endl;
   }
   return 0;
}
