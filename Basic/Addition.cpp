#include <iostream>

using namespace std;

int add(int a, int b){
    int c;
    c = a+b;
    return c;
}

int main()
{
  int a, b;
  cout<<" Enter TWO integer numbers :: ";
  cin>>a>>b;
 int answer = add(a, b);
 cout<< answer <<endl;

  return 0;
}