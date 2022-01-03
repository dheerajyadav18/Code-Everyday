#include <iostream>
#include<math.h>
using namespace std;

int main()
{
  double a,b,c,d,n1,n2;
  cout<<" Enter Cofficients : ";
  cin>>a>>b>>c;

  d = b*b - 4*a*c;

  if(d>0){

 n1 = (-b + sqrt(d))/2*a;
 n2 = (-b - sqrt(d))/2*a;
 cout<<" n1 : "<<n1<<"\n"<<" n2 : "<<n2;

  }

  else if (d==0)
  {
      n1 = -b/2*a;
      cout<< " n1 & n2 = "<<n1;
  }

  else {
      n1 = (-b/2*a);
      n2 = (sqrt(-d))/2*a;
      cout<<" n1 : "<<n1<<" + "<<n2<<"i"<<endl;
      cout<<" n2 : "<<n1<<" - "<<n2<<"i"<<endl;
  }

  return 0;
}