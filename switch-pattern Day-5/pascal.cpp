#include<iostream>
using namespace std;

int main()
{
int rows, c = 1, s, i, j;
cout << "Enter the number of rows : ";
cin >> rows;

for(i=0; i<rows; i++)
{
for(s=1; s <= rows-i; s++)
cout << "  " ;
for(j=0; j <= i; j++)
{
if (j==0 || i==0)
c = 1;
else
c=c*(i-j+1)/j;
cout <<c<< "  ";
}
cout << endl;
cout<<endl;
}
return 0;
}