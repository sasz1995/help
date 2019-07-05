#include <iostream>
using namespace std;
class A
{
   private: 
   	static int a;
   	int b,c;
    public :
     void setdata(int x,int y)
       {
       	b=x;
        c=y;
       }
       void print()
       {
       	cout<<b<<endl<<c<<endl<<a;
       }
       static void display();
}a1;
	int A::a=5;
void A::display()
{

	a1.setdata(8,9);
	a1.print();

}
int main()
{
 
   A::display();

}