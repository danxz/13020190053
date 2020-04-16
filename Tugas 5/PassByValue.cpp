#include <iostream>
using namespace std;
 
void passByValue(int data)
{
    cout << "Nilai data dalam passByValue( ) adalah " << data <<endl;
    data = 20;
    cout << "Nilai data setelah diubah " << data << endl;
    return;
}
 
int main()
{
    int data = 10;
 
    cout << "Nilai data = "<< data << endl;
    
    passByValue(data);
    
    cout << "Nilai data setelah pemanggilan passByValue() adalah " << data;
    
}
