#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fin;
fin.open("myfile.dat");
char ch;
//fin>>ch;
//cout<<ch;
while(!fin.eof())
{
	
      fin>>ch;
     cout<<ch;
} 
return 0;

}