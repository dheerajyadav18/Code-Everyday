#include <iostream>

using namespace std;

int main()
{
  int n,a=0,b=1;
  cout<<"Enter a No. :";
  cin>>n;
  if(n==0){
      cout<<"0"<<" ";
      return 0;
  }else
  cout<<a<<" "<<b<<" ";
  int c=a+b;
  for(;c<=n;){
      cout<<c<<" ";
      a=b;
      b=c;
      c=a+b;
  }
  return 0;
}