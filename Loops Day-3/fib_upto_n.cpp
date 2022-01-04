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
  }
  cout<<a<<" "<<b<<" ";
  for(int i=2; i<n; i++){
      int c=a+b;
      cout<<c<<" ";
      a=b;
      b=c;
  }
  return 0;
}