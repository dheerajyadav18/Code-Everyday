#include <iostream>

using namespace std;

int main()
{
  string str;
  int vowel,cons,digit,spaces;
  vowel=cons=digit=spaces=0;
  cout<<"Enter a string :: ";
  getline(cin , str);

  for(int i=0; str[i]!='\0'; i++){
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')  vowel++;
      else if(str[i]>='a' && str[i]<='z') cons++;
       else if(str[i]==' ') spaces++;
      else digit++;
     
  }
  cout<<"VOWELS :: "<<vowel<<endl;
  cout<<"CONSONENT :: "<<cons<<endl;
  cout<<"DIGIT :: "<<digit<<endl;
  cout<<"SPACES :: "<<spaces<<endl;
  return 0;
}