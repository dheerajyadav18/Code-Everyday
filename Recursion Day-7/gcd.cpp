#include <iostream>

using namespace std;

int gcd(int a,int b){

    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    int d = gcd(a,b);
    cout<<d;
  return 0;
}