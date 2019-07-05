#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
   vector <int> v;
    int i,n;
    cout<<"enter the size"<<endl;
    cin>>n;
        
       
        for(i=0;i<n;i++)
       { 
            v.insert(i);
       } 
    
       cout<<endl<<endl;
        for(i=0;i<v.size();i++)
       { 
         cout<<v[i]<<endl;
       } 
      
       return 0;
}
