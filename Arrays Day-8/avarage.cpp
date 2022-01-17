#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cout<<"Enter a size of array :: ";
  cin>>n;

  float A[n];
  float S = 0;

  for(int i = 0; i<n; i++){
      cin>>A[i];
      S+=A[i];
  }
  float Avarage = S/n;
  cout<<" Avarage is "<<Avarage;

  return 0;
}