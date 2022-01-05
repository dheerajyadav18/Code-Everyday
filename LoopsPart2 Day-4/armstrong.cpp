#include <bits/stdc++.h>

using namespace std;

int main()
{
  int num,b=1,r=0;
  cout<<" Enter a number : ";
  cin>>num;
  int a = num;
  while (num>0){
      b = num%10;
      r = r + (b*b*b);
      num/=10;
  }
  if(a==r) cout<<" Number is ARMSTRONG";
  else cout<<" NOT ARMSTRONG";
  return 0;
}