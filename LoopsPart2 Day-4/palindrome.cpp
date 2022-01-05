#include <bits/stdc++.h>

using namespace std;

int main()
{
  int num, a,r=0;
  cout<<"Enter a number : ";
  cin>>num;
  int n=num;
  while (num!=0)
  {
     a=num%10;
     r=(r*10)+a;
     num/=10;
  }
  cout<<r;
  if(n==r) cout<<" Number is PALINDROME";
  else cout<< " Not PALINDROME";
  
  return 0;
}