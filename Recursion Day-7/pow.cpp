#include <iostream>

using namespace std;

int pow(int base, int expo){

    if(expo==0)
     return 1;
     
    return base*pow(base,expo-1);
}

int main()
{
  int base , expo;
  cout<<"Enter a base : ";
  cin>>base;
  cout<<"Enter a exponent : ";
  cin>>expo;

  cout<<pow(base,expo);

  return 0;
}