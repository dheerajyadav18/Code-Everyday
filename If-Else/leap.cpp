#include <iostream>

using namespace std;

int main()
{
  int a;
  cout << " Enter a Year : ";
  cin>>a;

  if(a%400==0){
      cout<<" Leap Year ";
  }
  else if(a%100==0){
      cout<<" Not a Leap Year";
  }
  else if(a%4==0){
      cout<<" Leap Year ";
  }
  else cout<<" Not a Leap Year";

  return 0;
}