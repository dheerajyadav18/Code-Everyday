#include <iostream>

using namespace std;

int main()
{
  int a,b, temp=0;
  cout << "Enter A No. :: ";
  cin>>a;
  cout<< "Enter B No. :: ";
  cin>>b;

  cout<<" Before Swaping :: "<<endl;
  cout<<" A = "<<a<<endl;
  cout<<" B = "<<b<<endl;

 temp = a;
 a = b;
 b = temp; 

  cout<< " After Swaping :: "<<endl;
  cout<<" A = "<<a<<endl;
  cout<<" B = "<<b<<endl;
  return 0;
}