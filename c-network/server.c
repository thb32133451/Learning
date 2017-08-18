#include <sys/types.h>  
#include <sys/socket.h>  //包含套接字函数库
#include <stdio.h>
#include <netinet/in.h>  //包含INEF相关结构
#include <arpa/inet.h>   //包含INEF相关操作的函数
#include <unistd.h>

int main(){
    int server_sockfd,client_sockfd;  //用于保存服务器和客户套接字标识符
    int server_len,client_len;        //用于保存服务器和客户消息长度
    struct sockaddr_in server_address;  //定义服务器套接字地址
    struct sockaddr_in client_address;  //客户套接字地址
    server_sockfd = socket(AF_INET,SOCK_STREAM,0);   //定义套接字类型
    server_address.sin_family = AF_INET;  //定义套接字地址中的域
    server_address.sin_addr.s_addr=inet_addr("127.0.0.1");  //定义套接字地址
    server_address.sin_port=9734;       //定义套接字端口
    server_len=sizeof(server_address);

    bind(server_sockfd,(struct sockaddr *) &server_address,server_len);
        //定义套接字名字
    listen(server_sockfd,5);   //创建套接字队列

    while(1){
        double ch,result;
        printf("服务器等待消息。\n");

        client_len=sizeof(client_address);
        client_sockfd=accept(server_sockfd,(struct sockaddr *)
                &client_address,(socklen_t *__restrict) &client_len);
              //接收连接
        read(client_sockfd,&ch,1);
        result*=ch;
        write(client_sockfd,&result,1);
        close(client_sockfd);
    }
}
