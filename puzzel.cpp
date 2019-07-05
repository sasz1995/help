#include <iostream>
using namespace std; 
int find(char*,char,int);
void display(char*,char *,int);
int main()
{
  int count=3,i,j,l=0,n,t;
    char a[]=("word");
     char c[]=("xxxx");
     char b;
      int y;
       for(j=0;*(a+j)!='\0';j++)
              l++;
            n=count+l;
            t=l;
       for(i=0;i<n;i++)
       {
            cin>>b; 
            y=find(a,b,l);
             if(y==l)
               {
                 t++;
                count--;
                 cout<<"chance left"<<count<<endl;
               }
                if(count==0)
                  {
                    cout<<"better luck next time ";
                    break;
                  } 
                   t--;
            display(a,c,y);
             if(t==0)
             {
              cout<<"you win";
              break;
             }
       }
     return 0;
}

int find(char *a,char b,int l)
{
  int i;
  for(i=0;*(a+i)!='\0';i++)
    {
      if (*(a+i)==b)
     	   {
          return i;
         }
     }    
         return l;
    
 }
void display(char *a,char *c,int i)
{       *(c+i)=*(a+i);
        cout<<c;
        cout<<endl;
}
