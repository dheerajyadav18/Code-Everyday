#include <bits/stdc++.h>

using namespace std;

int main()
{
  int num;
  cout<<" Enter a Number : ";
  cin>>num;
  while(num!=0){
  int c = num%10;
  cout<<c;
  num /= 10;
  }
  return 0;
}