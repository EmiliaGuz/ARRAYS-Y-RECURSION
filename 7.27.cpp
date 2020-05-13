#include <iostream>

using namespace std;

bool primeArray(int arr[],int tam) {
	int divisor, cont = 0,prim;
	for(int i=0; i<=tam-1;i++)
	{
		prim = 1;
		divisor = 1;
		while (divisor <= arr[i]) {

			if (arr[i] % divisor == 0) {

				cont++;

			}

			divisor++;
			
		}
		

		if (cont == 2) {

			cout << arr[i] ;

			return true;
		}

		cont = 0;
		
		
	}

}

int main()
{
	int arr[] = { 2,5,8,1,4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	primeArray(arr, n);
}