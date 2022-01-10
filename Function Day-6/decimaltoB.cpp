#include <iostream>
#include<cmath>
using namespace std;

void decimal(int n){ 
       int r, ans=0;
      while(n>0){
       r = n%2;
       ans = ans*10+r;
       n/=2;
       }
       cout<<ans;
}

int main()
{
  int n;
  cout<<"Enter a decimal no. ";
  cin>>n;
  decimal(n);
  return 0;
}