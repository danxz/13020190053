#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream datamhs;
	datamhs.open("datamhs.txt",ios::out);
	datamhs << "----------------Data Mahasiswa-----------------\n\n";
	datamhs << " stambuk : \n Nama : \n Kelas : \n IPK : ";
	datamhs.close();
}
