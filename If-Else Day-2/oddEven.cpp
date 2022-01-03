#include <iostream>

using namespace std;

void EvenOdd(int a){
    if (a%2==0){
        cout<<" Even Number! "<<endl;
    }
    else cout<<" Odd Number! "<<endl;
}

int main()
{
  int a;
  cout<<" Enter a No. :: ";
  cin>>a;

  EvenOdd(a);
 
  return 0;
}