#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream datamhs;
	datamhs.open("datamhs.txt",ios::out);
	datamhs << "----------------Data Mahasiswa-----------------\n\n";
	datamhs << "1. stambuk = \nnama = \nKelas = \nIKPK = ";
	datamhs.close();
}
