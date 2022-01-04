#include <iostream>

using namespace std;

int main()
{
  int n,a=0;
  cout<<"Enter a no. : ";
  cin>>n;
  for(int i=0; i<=n; i++){
      a += i;
  }
  cout<<a;
  return 0;
}