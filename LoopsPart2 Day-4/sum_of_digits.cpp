#include <bits/stdc++.h>

using namespace std;

int main()
{
  int num,b=0;
  cout<<"Enter a number :";
  cin>>num;
  while(num!=0){
      int a = num%10;
      b += a;
      num/=10;
  }
  cout<<b;
  return 0;
}