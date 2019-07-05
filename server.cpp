#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
using namespace std;

int main()
{

int listen_sock,client_sock;

listen_sock=socket(AF_INET,SOCK_STREAM,0);

if(listen_sock==-1)
{
	cerr<<"cant creat scoket";
	return 0;
}
sockaddr_in server,client;
server.sin_family=AF_INET;
server.sin_port=htons(54000);
server.sin_addr.s_addr=INADDR_ANY;
memset(server.sin_zero,8,0);
unsigned len =sizeof(sockaddr_in);
int b =bind(listen_sock,(sockaddr*)&server,len);
if(b==-1)
 {
 	cerr<<"cant bind";
 	return 0;

 }
 if(listen(listen_sock,5)==-1)
 {
 	cerr<<"cant listen";
 	return 0;
 }

 client_sock=accept(listen_sock,(sockaddr *)&client,&len);
 if(client_sock==-1)
 {
 	cerr<<"cant accept";
    return 0;
 }
 close(listen_sock);
 char buf[4096]; 
  string  msg;

  while(1)
   {
	   memset(buf,4096,0);
      int bytes_recieved= recv(client_sock,buf,4096,0);
      if(bytes_recieved>0)
     {
       cout<<">"<<"bytes_recieved"<<bytes_recieved<<"\t"<<string(buf,0,bytes_recieved)<<endl;
     }      
     
     memset(buf,4096,0);
     
     cout<<">";
     
     getline(cin,msg);
     
     int sent=send(client_sock,msg.c_str(),msg.size()+1,0);
     
      if (sent==-1)
      {
        cerr<<"server error";
        return 0;
      }
     
}

 
 close(client_sock);
 
 return 0;


}
