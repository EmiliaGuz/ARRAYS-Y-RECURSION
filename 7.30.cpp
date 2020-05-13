#include <iostream>

using namespace std;

void printArray(int starting, int ending)
{
    int arr[] = { 1,2,3,4 };
    ending = sizeof(arr)/sizeof(arr[0]);
  
    //cout << ending << endl;
    
    for (int starting=0; starting <= ending-1; starting++)
    {
        
        cout << arr[starting];
        
    }

}
void printArrayRecur(int starting, int ending)
{
    int arr[] = { 1,2,3,4 };
    ending= sizeof(arr) / sizeof(arr[0]);
    starting = 0;
    if (starting == ending)
    {
        return;
    }
    else
    {
        return printArrayRecur(arr[starting + 1], ending) ;
    }
}

int main()
{
    int pri = 0;
    int ult = 0;
    cout << "Imprimir los elementos: ";
    printArray(pri, ult);
    printArrayRecur(pri, ult);
}