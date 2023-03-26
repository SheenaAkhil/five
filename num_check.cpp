#include <iostream>  
using namespace std;  
int main()  
{  
  int n;  
  cout << "Enter the Number  ";  
  cin >> n;  
 if((n%3==0)&&(n%5==0))
     cout<<"Good Number";
if((n%3==0)&&(n%5!=0))
     cout<<"Bad Number";
if((n%3!=0)&&(n%5==0))
     cout<<"Poor Number";
if((n%3!=0)&&(n%5!=0))
     cout<<"-1" ;
return 0;
}