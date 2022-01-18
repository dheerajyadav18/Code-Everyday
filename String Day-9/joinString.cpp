#include <iostream>

using namespace std;

int main()
{
  string s;
  cout<<"Enter a string ";
  getline(cin, s);
  for(int i=0; s[i]!='\0'; i++){
      if(s[i]==' ') continue;
      cout<<s[i];
  }
  return 0;
}