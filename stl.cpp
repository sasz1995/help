#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector <int> v {1,2,3,4,5};
    int i;
    
   
        vector <int>::iterator it;
            it=v.begin();
        v.insert(it+2,35);
         for(i=0;i<v.size();i++)
       { 
         cout<<v[i]<<endl;
       } 
        v.push_back(6);
       cout<<endl<<endl;
        for(i=0;i<v.size();i++)
       { 
         cout<<v[i]<<endl;
       } 
      
       return 0;
}
