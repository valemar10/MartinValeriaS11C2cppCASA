/* Haga un programa que tenga dos funciones. Cada una debe recibir dos arreglos unidimensionales de 5 elementos cada uno. La primera funcion debe retornar el producto de los dos arreglos elemento a elemento. La segunda debe retornar el producto punto de los dos arreglos. En la funcion main se debe imprimir lo que retornen las dos funciones para [1,2,3,4,5] y [10,20,30,40,50]. llamelo producto_array_FUN.cpp */
#include <iostream>
using namespace std;
void elementos(int);
void punto(int);
int main()
{

   elementos(5);
   punto(5);
   
}
void elementos(int n)
{
    int arr[5];
    int arr2[5];
    int arr3[5];
    int i;
    int j=0;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr2[0] = 1;
    arr2[1] = 2;
    arr2[2] = 3;
    arr2[3] = 4;
    arr2[4] = 5;
    for (i=0;i<n;i++)
    {
        arr3[i]=arr[i]*arr2[i];
        cout << endl << "El resultado es: "  << arr3[i] << endl;
    }
 
   
          
     
    
}
void punto(int k)
{
    int arr[5];
    int arr2[5];
    int arr3[5];
    int i;
    int j=0;
    int suma=0;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr2[0] = 1;
    arr2[1] = 2;
    arr2[2] = 3;
    arr2[3] = 4;
    arr2[4] = 5;
    for (i=0;i<k;i++)
    {
        suma+= arr[i]*arr2[i];
    }
    
    cout << endl << "El resultado del producto punto es: "  << suma << endl;
}
