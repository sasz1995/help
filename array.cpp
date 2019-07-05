#include <iostream>
#include <array>
using namespace std;
int main()
{
    int i,n;
    //cin>>n;
    //const int &y=n;
	array<int,5> a;
     for(i=0;i<5;i++)
     {
     	cin>>a[i];
     }	
     for(i=0;i<5;i++)
     {
     	cout<<a[i]<<endl;
     } 	
     
     cout<<" at position 3"<<endl<<a.at(2)<<endl;
       a.fill(45);
          for(i=0;i<5;i++)
     {
     	cout<<a[i]<<endl;
     } 	
     return 0;

}