#include <iostream>

using namespace std;

int main()
{
  char c;
  cout << " Enter a Character :: ";
  cin>>c; 
  if(c =='a' || c =='e' || c =='i' || c =='o' || c =='u'){
       cout<<" character is VOWEL! "<<endl;
  }
 else if(c =='A' || c =='E' || c =='I' || c =='O' || c =='U'){
          cout<<" character is VOWEL! "<<endl;
      }
  else cout<<" Character is CONSONENT! "<<endl;

  return 0;
}