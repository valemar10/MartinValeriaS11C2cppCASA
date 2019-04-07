#include <iostream>

using namespace std;

int Fun(int);
int main(){
     int n;
     cout << "Introduce un numero: "; cin >> n;
     cout << endl << "El factorial es: "  << Fun(n) << endl;
     return 0;
}
int Fun(int n){
    int b=0;
    if(n < 0)
    {
        b=0;
        return b;
    }
      
     else if(n > 1)
     {
         b= n * Fun(n-1);
         return b;
     }
    
     else
     {
          b=1;
          return b;
     }
}