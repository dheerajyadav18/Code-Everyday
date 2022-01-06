#include <iostream>

using namespace std;

int main()
{
  int row,col;
  cout<<"enter a number of rows and columns: ";
  cin>>row>>col;
  cout<<endl;
  for(int i=1; i<=row; i++){
      for(int j=1; j<=col; j++){
          cout<<"* ";
      }
      cout<<endl;
  }
  
  return 0;
}