#include <bits/stdc++.h>

using namespace std;

int main()
{
  char c;
  double a,b;
  cin>>c;
  cout<<"Enter a number : ";
  cin>>a>>b;
   switch (c)
   {
   case '+' :
       cout<<a+b;
       break;
   case '-' :
       cout<<a-b;
     break;
   case '*' :
       cout<<a*b;
       break;
   case '/' :
    cout<< a/b;
       break;
   default:
        cout<<" invalid operation ";
       break;
   }
   
  return 0;
}