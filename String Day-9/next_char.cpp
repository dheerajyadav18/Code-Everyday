#include <iostream>

using namespace std;

int main()
{
  string s;
  cout<<"Enter a string : ";
  cin>>s;
  for(int i =0; s[i]!='\0'; i++){
      if(s[i]>='a' && s[i]<='z'){
         s[i]++;
      }
      cout<<s[i];
  }
  return 0;
}