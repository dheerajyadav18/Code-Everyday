#include <iostream>

using namespace std;

int sum(int n){
      int d=0;
      if(n==1){
        return 1;
      }
      return  n+sum(n-1);
}

int main()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  cout<<"Sum of n natural numbers are : "<<sum(n);
  return 0;
}