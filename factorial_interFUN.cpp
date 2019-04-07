#include <iostream>
using namespace std;
void factorial(int);
int main()
{
   int n;
   
   cout << "Introduce un numero: ";
   cin >> n;
   
   factorial(n);
}
void factorial(int n)
{
    int i;
    long double factorial; 
    factorial=1;
    for(i=1;i<=n;i++)
        factorial = factorial * i;
    cout << endl << "El factorial es: "  << factorial << endl;
}