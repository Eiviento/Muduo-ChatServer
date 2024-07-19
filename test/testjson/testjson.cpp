#include "json.hpp"
using json = nlohmann::json;

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

//json序列化示例1
string func1(){
    json js;
    js["msg_type"] =2;
    js["from"] = "zhang san";
    js["to"] = "li si";
    js["msg"] = "hello , what are you doing?";

    string sendBuf = js.dump();
    //cout << sendBuf.c_str() << endl;
    return sendBuf;

}

int main(){
    string recvBuf = func1();
    json jsbuf = json::parse(recvBuf);
    cout << jsbuf["from"]<<endl;
    return 0;
}
