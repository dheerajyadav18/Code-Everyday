#include <iostream>  
using namespace std; 

int main ()  
{  
  string str1, str2, result;   
  
  cout <<"  Enter the first string: ";  
  cin >> str1; 
  cout<<"  Enter the second string: ";  
  cin >> str2;  

for (int i = 0; i < str1.size(); i++)  
{  
    result = result + str1[i];
}   
 
for (int i = 0; i < str2.size(); i++)  
{  
   result = result + str2[i]; 
} 

   cout<<result;  
   
return 0;  
}  