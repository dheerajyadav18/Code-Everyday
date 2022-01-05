#include <bits/stdc++.h>

using namespace std;

int main()
{
  double base,expo;
  cout<<" Enter a Base : ";
  cin>>base;
  cout<<" Enter a Exponent : ";
  cin>>expo;
  double power = pow(base,expo);
  cout<<power;

  return 0;
}