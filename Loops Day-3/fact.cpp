#include <iostream>

using namespace std;

int main()
{
  int n, fact=1;
  cout<<"Enter a no. :";
  cin>>n;
  for(int i=n; i>0; i--)
  fact*=i;
  cout<<fact<<endl; 
  return 0;
}