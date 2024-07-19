# Muduo-ChatServer
基于muoduo库、redis、mysql实现的集群聊天服务器和客户端源码，可工作在nginx tcp负载均衡环境中


编译方式：
方式一：
cd build/
rm -rf *
cmake ..
make 

方式二：
./autobuild.sh

需要nginx的tcp负载均衡。
