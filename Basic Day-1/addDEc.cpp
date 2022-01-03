#include <iostream>

using namespace std;

float mult ( float a, float b ){
    float ans ;
    ans = a*b;
    return ans;  
}
int main()
{
  float a ,b;
  cin>>a>>b;

  float ans = mult(a,b);
  cout<< ans << endl;
  return 0;
}