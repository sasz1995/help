#include <iostream>
using namespace std; 
int find(char*,char,int);
void display(char*,char ,int);
int main()
{
  int count=3,i,j;
    char a[]=("word");
     char b;
      int y;
  for(i=0;a[i]!='\0';i++)
     {
       for(j=0;j<count;j++)
         {
            cin>>b; 
            y=find(a,b,i);
             if(y==1)
               {
                  display(a,b,i);
                  break;      
               }      
          }
              if(j==count)
              {
              	cout<<"attempt over";
              	break;
              }
            cout<<endl;
       }
     return 0;
}

int find(char *a,char b,int i)
{
    if(*(a+i)==b)
    {
    	return 1;
    }
      
      return 0;     
}
void display(char *a,char b,int i)
{        int l=0,j;
         for(j=0;*(a+j)!='\0';j++)
          l++;
           char c[l];
           for(j=0;j<l;j++)
           	c[j]='x';
           for(j=0;j<=i;j++)
           	c[j]=*(a+j);

        cout<<endl;
        cout<<c;
}
