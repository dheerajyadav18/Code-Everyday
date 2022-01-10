#include <iostream>
#include<cmath>

using namespace std;

int binary(long long n){
       int r=0, d=0, i=0;
       while(n!=0){
           r=n%10;
           n=n/10;
           d=d+r*pow(2,i);
           i++;
       }
        return d;
}

int main()
{
  long long n;
  cout<<"enter a binary no. ";
  cin>>n;
  cout<<binary(n)<<endl;
  return 0;
}