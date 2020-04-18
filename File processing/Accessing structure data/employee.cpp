#include "employee.h"
Employee::empno() const{ return m_empno; }
Employee::setEmpno(int empno){ m_empno = empno; }
Employee::fname() const { return m_fname; }
Employee::setFname(const string &fname)
{
   int sz=fname.size();
   sz=(sz<20? sz: 19);
   fname.copy(m_fname,sz);
   m_fname[sz]='\0';
}
string Employee::lname() const { return m_lname;}
void Employee::setLname(const string &lname)
{
   int sz=lname.size();
   sz=(sz<20? sz: 19);
   lname.copy(m_lname,sz);
   m_lname[sz]='\0';
}
string Employee::email() const { return m_email; }
void Employee::setEmail(const string &email)
{
   int sz=email.size();
   sz=(sz<20? sz: 19);
   email.copy(m_email,sz);
   m_email[sz]='\0';
}
Employee::salary() const { return m_salary;}
void Employee::setSalary(double salary)
   { m_salary = salary;}
Employee::Employee(int eno, string fn, string ln,
   string mail, double sal)
{
   setEmpno(eno);
   setFname(fn);
   setLname(ln);
   setEmail(mail);
   setSalary(sal);
}
