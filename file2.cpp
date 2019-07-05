#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
class A
{
     private :
       int a;
       char b[100];
       public :
       void setdata() 
          {
                cin>>a;
                cin>>b;
          }
         void display()
         {
         	cout<<a;
         	cout<<endl;
         	cout<<b;
             
         }
 };

 int main()
 {
 	fstream fout,fin;
 	A a1;
 	fout.open("Mai.dat",ios::app|ios::binary);
 	a1.setdata();
 	fout.write((char *)&a1,sizeof(a1));
     fout.close();
     fin.open("Mai.dat",ios::in|ios::binary);
      while(fin.read((char *)&a1,sizeof(a1))!=NULL)
      	  a.display();



     return 0;
 }
