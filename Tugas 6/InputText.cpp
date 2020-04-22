#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream mhsfile;
    mhsfile.open("datamhs.txt",ios::out);
    mhsfile << "stambuk : 13020190055\nnama : Muhammad Fahrizal\nKelas = A1";
    mhsfile.close();
}
