#include<iostream>
using namespace std;

  int main()
   { 
     int n; 
     cin>>n;
    int i,j;
      int s=1;
    for(i=0;i<n;i++)
     {
      for(j=0;j<n;j++)
        {
              if(j>=(n-1-i))
             {
                 cout<<s;
                    s++;
              }
               else 
                cout<<" ";
         }  
      cout<<endl;
     }

return 0;

}
      

