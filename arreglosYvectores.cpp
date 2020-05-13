#include <iostream>
using namespace std;

void reverseDigit(int arr[],int tam)

{
    int inver;
    for(int i=0; i<tam;i++,tam--)
    {
        inver = arr[i];
        arr[i] = arr[tam];
        arr[tam] = inver;
        
        cout << inver;
    }
}

int main()

{
    int lista[] = { 1,2,3,4 };
    int tam = 3;
    reverseDigit(lista, tam);

}

/*
void inversionRecursiva(int lista[], int n, int a)

{

    int m;

    if (n == 1) {

        return lista[0];

    }

    else {

        m = lista[a];

        lista[a] = lista[n];

        lista[n] = m;

        return (lista, n--, a++)

    }

}*/