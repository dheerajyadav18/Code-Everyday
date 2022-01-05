#include <bits/stdc++.h>

using namespace std;

int main()
{
  int num, a=0;
  cout<<"Enter a number::";
  cin>>num;
  if(num==1 && num==2) cout<<" Prime";
  for(int i=2; i<=num/2; i++){
      if(num%i==0){
          a=1;
      }
  }
  if(a==1){
      cout<<" not Prime";
  }else cout<<" Prime";
  return 0;
}