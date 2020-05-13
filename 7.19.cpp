#include <iostream>
#include <array>
#include <iomanip>
#include <stdexcept>
using namespace std;

void outputArray(const array<int> &);
void inputArray(array<int> &);

int main()
{
    array<int> integers1(7);
    array<int> integers2(10);

    cout << "Size of array integers1 is" << integers1.size();
    cout << "Array after initializacion: ";
    outputArray(integers1);

    cout << "Size of array integers2 is" << integers2.size();
    cout << "Array after initializacion: ";
    outputArray(integers2);

    cout << "Enter 17 integers" << endl;
    inputArray(integers1);
    inputArray(integers2);

    cout << "After input, the arrays contain";
    outputArray(integers1);
    cout << "integers2: ";
    outputArray(integers2);

    cout << "\nEvaluating: integers1 != integers2" << endl;
    if (integers1 !=integers2)
    { 
        cout << "integers1 and integers2 are not equal" << endl; 
    } 
    
    array<int> integers3{ integers1 };
    cout << "\nSize of vector integers3 is " << integers3.size() << "\nvector after initialization: ";
    outputArray(integers3); 
    cout << "integers1: "; 
    outputArray(integers1); 
    cout << "integers2: "; 
    outputArray(integers2); 
    cout << "\nEvaluating: integers1 == integers2" << endl; 


}
