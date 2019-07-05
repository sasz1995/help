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
	int port=54000;
	string ipAddr="127.0.0.1";
	int client =socket(AF_INET,SOCK_STREAM,0);

	if(client==-1)
	{
		cerr<<"cant create socket";
		return 0;
	}

sockaddr_in hint;
hint.sin_family=AF_INET;
hint.sin_port=htons(port);
inet_pton(AF_INET,ipAddr.c_str(),&hint.sin_addr);
int con=connect(client,(sockaddr *)&hint,sizeof(hint));
if(con==-1)
{
	cout<<"cant connect";
     return 0;

}
char buf[4096];
string msg;
do 
{
	cout<<">";
	getline(cin,msg);
	if(msg.length()>0)
	{
		memset(buf,4096,0);
		int sent=send(client,msg.c_str(),msg.size()+1,0);
		if(sent!=-1)
		{
			memset(buf,4096,0);
		
           int bytesR=recv(client,buf,4096,0);

           if(bytesR>0)
           {
           	cout<<"server>"<<string(buf,0,bytesR);
           }
		}
	
	}
} while(msg.length()>0);
close(client);
return  0;
}