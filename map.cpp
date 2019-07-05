#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;
class A
{ private:
	int a;string b;
public:
	void set(int x,string y)
	{
        a=x;
        b=y;
	}
     void display()
     {
     	cout<<a<<endl<<b;

     }
};
int main()
{
A a1,b1,b3; 
map<int,string> c{{1,"one"},{2,"two"},{3,"three"}};
map<int,A> c2;
c.insert(pair<int,string>(4,"four"));
pair<int,string> p1 {5,"five"};
pair<int,A> p2;
c.insert(p1);
map <int,string>::iterator p=c.begin();
a1.set(6,"six");
p2=make_pair(1,a1);
b1=p2.second;
b1.display();
c2.insert(pair<int,A>(0,a1));
//map <int,A> :: iterator q=c2.begin();
//q=c2.begin();
b3=c2[0];
b3.display();
while(p!=c.end()) 
{
   cout<<p->first<<"\t"<<p->second<<endl;
   p++;
}
return 0;
}