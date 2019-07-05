#include <pthread.h>
#include <iostream>
using namespace std;
void *th(void *g){
        int y = 10;
        pthread_exit((void*)y);
}
int main(int argn, char ** argp){
        void * ret;
        pthread_t thread;
        pthread_create(&thread, NULL, th, NULL);
        pthread_join(thread, &ret);
        int nm = (int*)ret;
        cout<<nm;
        return 0;
}