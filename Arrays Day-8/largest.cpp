#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of an array :";
    cin>>n;

    int arr[n];
    int largest =0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>largest) largest = arr[i];
    }
    cout<<" Largest Number in an array is "<<largest;

  return 0;
}