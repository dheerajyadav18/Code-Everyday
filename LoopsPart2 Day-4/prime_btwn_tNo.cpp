#include <iostream>
using namespace std;
int main() 
{
int n1, n2, Prime = 1;
cout << "Enter two numbers:: ";
cin >>n1>>n2;

while (n1 < n2) {
Prime = 1;

if (n1==0 || n1==1) 
    Prime = 0;
else {
  for (int i = 2; i <= n1 / 2; ++i) {
    if (n1 % i == 0) {
     Prime = 0;
       break;
}
}
}
if (Prime)
cout <<n1<< " ";
n1++;
}
return 0;
}