#include <iostream>
using namespace std;
void swap (int &a, int &b)
{
   int aux;
   aux=a;
   a=b;
   b=aux;
}

int main ()
{
  int n1, n2;

  cout << "Introdueix dos nombres enters: "; 
  cin >> n1 >> n2;
  
  //////// FER LA CRIDA DE LA FUNCIO SWAP AQUI UTILITZANT COM A PARAMETRES n1 i n2
  swap(n1, n2);
  ///////////////////////////////////////////////////////////////////////////////
  cout << "Els dos nombres canviats són: "<<  n1 << " "<< n2;
  
  return 0;
}
