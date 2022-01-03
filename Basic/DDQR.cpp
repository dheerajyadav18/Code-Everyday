#include <iostream>

using namespace std;

int Quotient(int a, int b){
    int c;
    c = a/b;
    return c;
}

int Remainder(int a, int b){
    int d;
    d = a%b;
    return d;
}

int main()
{
  int a, b;
  cout<<" Enter a Divisor : ";
  cin>>b;
  cout<<" Enter a Dividend : ";
  cin>>a;
  int Q = Quotient(a,b);
  int R = Remainder(a,b);

 cout<<" Quotient is :: "<< Q <<endl;
 cout<<" Remainder is :: "<< R <<endl;

  return 0;
}