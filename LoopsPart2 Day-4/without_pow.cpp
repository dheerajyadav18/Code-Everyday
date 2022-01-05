#include <bits/stdc++.h>

using namespace std;

int main()
{
  double n,p,a=1;
  cout<<" Enter a Base : ";
  cin>>n;
  cout<<" Enter a exponent : ";
  cin>>p;
  for(int i=1; i<=p; i++){
       a = a*n;
  }
  cout<<a;
  return 0;
}