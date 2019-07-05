#include <iostream>
#include <vector>
using namespace std;
int main()
{
	 vector< vector<int> > vect{{1, 2}, 
                               {3, 4, 5}, 
                               {6}}; 
       int i,j,n,m;
       cin>>n>>m;
       vector<vector<int>> v(n);
         for(i=0;i<n;i++)
         {
    
              for (int j = 0; j < m; j++) 
             {    
                 v[i].push_back(j);
             }

   
         }


       for(i=0;i<vect.size();i++)
       {
       	for(j=0;j<vect[i].size();j++)
       	{
       		cout<<vect[i][j]<<"\t";
       	}
       cout<<endl;
       }

for(i=0;i<v.size();i++)
       {
       	for(j=0;j<v[i].size();j++)
       	{
       		cout<<v
       		[i][j]<<"\t";
       	}
       cout<<endl;
       }



   return 0;
}