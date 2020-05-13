#include <iostream>

int recursiveMaximun(int starting, int ending)
{
    int maxelement=0;
    int arr[] = { 4,8,2,1 };
    ending = sizeof(arr) / sizeof(arr[0]);
    starting = 0;
    if (starting == ending)
        return maxelement;
    else {
        if (arr[starting] > maxelement)
        {
            maxelement = arr[starting];
            return recursiveMaximun(starting + 1, ending);
        }
    }   
}

int main()
{
    int fin = 0;
    recursiveMaximun(0, fin);
}
