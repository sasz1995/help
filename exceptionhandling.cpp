#include <iostream>
#include <exception>
using namespace std;
class A :public exception
{
  private:
   int a;
   public: 
   const char* what()
   {
   	cout<<"negative value not allowed";
   }
   int set(int x)
  	{
  		a=x;
  	}
   
};
 class B
 {
 	 private :
 	int b;
 public:
 	int data(int y)
 	{
 	    b=y;
 	}
 
};
int main()
   { int a,b;  
    B b1;
    A a1;
	b=b1.data(6);
	a=a1.set(7);
	try
	{
		if(a>b)
		throw a1;
	}
   catch (A obj)
   {
   	cout<<obj.what();
   }
return 0;
}