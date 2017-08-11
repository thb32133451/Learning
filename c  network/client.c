#include <sys/types.h>
#include <sys/socket.h>                                     // 包含套接字函数库
#include <stdio.h>
#include <netinet/in.h>                                     //包含AF_INET相关结构
#include <arpa/inet.h>                                      //包含AF_INET相关操作的函数
#include <unistd.h>

int main() {
    int sockfd;                                              //用于保存客户套接字标识符
    int len;                                                  //用于客户消息长度
    struct sockaddr_in address;                                   //定义客户套接字地址
    int result;
    int ch;    //定义要传送的消息
    sockfd = socket(AF_INET,SOCK_STREAM, 0);                   //定义套接字类型
    address.sin_family = AF_INET;                              //定义套接字地址中的域
    address.sin_addr.s_addr = inet_addr("127.0.0.1");          // 定义套接字地址
    address.sin_port = 9734;                                   //定义套接字端口
    len = sizeof(address);
    result = connect(sockfd, (struct sockaddr *) &address, len);// 请求连接
    if (result == -1) {
        perror("连接失败");
        return 1;
    }
    printf("请输入想要计算平方的数字\n");
    scanf("%d",&ch);
    write(sockfd, &ch, 1);// 向服务器传送消息
    printf("%d",ch);
    read(sockfd, &ch, 1);// 从服务器接收消息
    printf("+1=%d\n",ch);
    close(sockfd); // 关闭连接
    return 0;
}
