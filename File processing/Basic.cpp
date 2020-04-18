#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;
 
int main() {
   int c=65;
   cout<<"A = "<<static_cast<char>(c)<<" cast to char"<<endl;
   cout<<"A = "<<bitset<8>(c)<<" in 8 bit binary"<<endl;
   cout<<"A = "<<bitset<16>(c)<<" in 16 bit binary"<<endl;
   cout<<"A = "<<oct<<c<<" in octal"<<endl;
   cout<<"A = "<<hex<<c<<" in hexadecimal"<<endl;
   cout<<"A = "<<dec<<c<<" in decimal"<<endl;
   // Or simply, cout<<"A = "<<c<<" in decimal"<<endl;
   return 0;
}
