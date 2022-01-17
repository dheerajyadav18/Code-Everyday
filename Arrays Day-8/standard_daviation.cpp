#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
  int n;
  cout<<"Enter a size of array : ";
  cin>>n;
  float arr[n];
  float sum =0.0, m , v=0.0, SD;
  for(int i =0; i<n; i++){
      cin>>arr[i];
      sum+=arr[i];
  }
  m=sum/n;
  for(int i = 0; i < n; i++)
   v+=pow(arr[i] - m, 2);
   v=v/n;
   SD = sqrt(v);
   cout<<"Standard Deviation is " <<SD;

  return 0;
}