#include <iostream>

using namespace std;

int fact_of_n(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact_of_n(n-1);

}

int main()
{
  int n;
  cout<<"Enter a number : ";
  cin>>n;
  cout<<"Factorial of "<<n<<" is "<<fact_of_n(n);
  return 0;
}