#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream mhsfile;
    mhsfile.open("datamhs.txt",ios::out);
    mhsfile << "stambuk = 13020190051\nnama = Muh Arif Setia Budi\nKelas = A1";
    mhsfile.close();
}
