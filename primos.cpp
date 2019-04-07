
 #include <iostream>
using namespace std;
/*programa 1: Haga un programa que reciba interactivamente dos valores enteros y retorne los numero primos contenidos en el intervalo delimitado por estos dos valores. llamelo primos.cpp*/
void primo(int,int);
int main()
{
    
    int v;
    int f;
    cout << "Introduce un numero minimo: "; cin >> f;
    cout << "Introduce un numero maximo: "; cin >> v;
   
    primo(f,v);
}

void primo(int f, int v)
{
    int b=0;
    int c=0;
    int d=0;
    int e=0;
     for(b=f;b<=v;b++)
      {
        for(c=f;c<=b;c++)
        {
          d=b%c;
          if(d==0)
          {
            e=e+1;
          }
        }
        if(e==2)
        {
           cout<<"El resultado es : "<<b<<endl;
        }
        e=0;
      }

}
