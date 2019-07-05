#include <iostream>
#include <utility>
#include <string>
using namespace std;
class student 
{
	private :
	int a;
	string b;
	public :
	  void setdata(string x,int c)
	        {
	        	b=x;
	        	a=c;

	        }
        void display()
        {
        	cout<<b;
        	cout<<a;
        }

};
int main()
{
	pair <string, int> p1;
	pair <string, string> p2;
	pair <int ,student> p3;
	p1=make_pair("Shubahm",720);  				
	p2=make_pair("one","two");
	
	student s1;
	s1.setdata("ladki",420);
	p3=make_pair(1,s1);
    cout<<p1.first<<"\t"<<p1.second<<endl;
    cout<<p2.first<<"\t"<<p2.second<<endl;
    cout<<p3.first;
    student s2=p3.second;
    s2.display(); 
    return 0;       
}