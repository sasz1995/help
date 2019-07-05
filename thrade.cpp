#include <iostream>
#include <pthread.h>

using namespace std;


void *add(void *) 
{
      int a,b,c;
      cin>>a>>b;
       c=a+b;  
   pthread_exit((void *)c);
}
void *mult(void *t)
{
    int r;
    r=*(int *)t * 10;
    pthread_exit((void *)r);     
}
int main () 
{
   pthread_t t1,t2;
   int rc,i,r;

   int p;
      rc = pthread_create(&t1, NULL,add,NULL);
       

      
      if (rc) 
      {
         cout << "Error:unable to create thread," << rc << endl;
         
      }
   
       pthread_join(t1,(void **)&p);
       i=p;
      cout<<i;
      rc = pthread_create(&t2,NULL,mult,(void *)&i);
         if (rc) {
         cout << "Error:unable to create thread," << rc << endl;
         
       }
       pthread_join(t2,(void **)&r);   
       cout<<endl;
       cout<<r;
      return 0;
   }