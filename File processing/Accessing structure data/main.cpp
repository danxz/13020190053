#include <iostream>
#include <iomanip>
#include <fstream>
#include "employee.h"
using namespace std;
const string FILENAME="emp.dat";
void print_table();
bool isExists(int);
void create(Employee);
void create(Employee emp)
{
   if(isExists(emp.empno())==true){
      cout<<"Cannot create! Record with Employee No #"
         <<emp.empno()<<" already exists."<<endl;
      return;
   }
   ofstream outfile(FILENAME, ios::app|ios::binary);
   if(!outfile){
      cout<<"Error opening file!";
      exit(1);
   }
   outfile.write(reinterpret_cast<const char *>
      (&emp),sizeof(Employee));
   outfile.close();
}
bool isExists(int eno)
{
   bool exists=false;
   ifstream infile(FILENAME, ios::in|ios::binary);
   while(!infile.eof()){
      Employee ee;
      infile.read(reinterpret_cast<char *>
      (&ee),sizeof(Employee));
      if(ee.empno()==eno) {exists=true; break;}
   }
   infile.close();
   return exists;
}
void print_table(){
   cout << left
      << setw(10) << setfill('-') << left << '+'
      << setw(21) << setfill('-') << left << '+'
      << setw(21) << setfill('-') << left << '+'
      << setw(21) << setfill('-') << left << '+'
      << setw(21) << setfill('-') << '+' << '+'
      << endl;
   cout << setfill(' ') << '|' << left
      << setw(9) << "Emp No." << setfill(' ')
      << '|' << setw(20) << "First Name" << setfill(' ')
      << '|' << setw(20) << "Last Name" << setfill(' ')
      << '|' << setw(20) << "Email" << setfill(' ')
      << '|' << right<< setw(20) << "Balance" << '|'
      << endl;
   cout << left << setw(10) << setfill('-') << left <<
      << setw(21) << setfill('-') << left << '+'
      << setw(21) << setfill('-') << left << '+'
      << setw(21) << setfill('-') << left << '+'
      << setw(21) << setfill('-') << '+' << '+' << endl;
   Employee record;
   ifstream infile(FILENAME, ios::in|ios::binary);
   infile.read(reinterpret_cast<char *>
      (&record),sizeof(Employee));
   while(!infile.eof()){
      cout << setfill(' ') << '|' << left
         << setw(9) << record.empno()
         << setfill(' ') << '|' << setw(20) << record.fname()
         << setfill(' ') << '|' << setw(20) << record.lname()
         << setfill(' ') << '|' << setw(20) << record.email()
         << setfill(' ') << '|' << right << setw(20)
         << record.salary() << '|' << endl;
      infile.read(reinterpret_cast<char *>
         (&record),sizeof(Employee));
   }
   infile.close();
   cout << left << setw(10) << setfill('-') << left << '+'
         << setw(21) << setfill('-') << left << '+'
         << setw(21) << setfill('-') << left << '+'
         << setw(21) << setfill('-') << left << '+'
         << setw(21) << setfill('-') << '+' << '+' << endl;
}
int main(void)
{
   ofstream outfile(FILENAME, ios::out|ios::binary);
   if(!outfile){
      cout<<"Error opening file!";
      exit(1);
   }
   outfile.close();
   int empno;
   string fname, lname, email;
   double sal;
   while(true){
      cout<<"\nEnter Employee no.(0 to exit)#";
      cin>>empno;
      if(empno==0) break;
      if(isExists(empno)) {
         cout<<"Employee number exists.
         Please enter different number."<<endl;
         continue;
      }
      cout<<"\nEnter first name, last name, email, salary\n# ";
      cin>>setw(19)>>fname;
      cin>>setw(19)>>lname;
      cin>>setw(19)>>email;
      cin>>sal;
      Employee emp(empno,fname,lname,email,sal);
      create(emp);
      print_table();
   }
   return 0;
}
