#include <iostream>

using namespace std;

int main()
{
  int n;
  cout<<" Enter a number of rows : ";
  cin>>n;
  for(int i=n; i>=1; i--){
      for(int s=0; s<n-i; s++){
          cout<<" ";
      }
      for(int j=i; j<=2*i-1; j++){
          cout<<"* ";
      }
      for(int j=0; j < i-1; j++)
     {
      cout << "* ";
     }
      cout<<endl;
  }
  return 0;
}