#include <bits/stdc++.h>

using namespace std;

void prime(int n1, int n2){
    
    while(n1 < n2){
       int f=0;
        if(n1<=1) n1++;
        for(int i=2; i<n1; i++){
            if(n1%i==0) f=1;
        }

    if(f==0){
        cout<<n1<<" ";
    }
        n1++;

    }
}

int main()
{
  int n1,n2;
  cout<<"Enter a number1 : ";
  cin>>n1;
  cout<<"Enter a number2 : ";
  cin>>n2;
  if(n1==1 && n2==2) cout<<"1 ";
 
  prime(n1,n2);
  return 0;
}