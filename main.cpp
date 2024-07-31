#include <iostream>
using namespace std;
#include "person.pb.cc"

using namespace sample;

class MyTest {
public:
  void test() {
    person P;
    P.set_id(1);
    P.set_name("lg");
    P.set_age(24);
    P.set_sex("man");
    P.mutable_addr()->set_addr("湖南大学");
    P.mutable_addr()->set_num(7);
    

    std::string output_str; // 存储二进制数据
    P.SerializeToString(&output_str);
    //  output_str 将包含序列化后的 Protocol Buffers 消息的二进制数据，
    // 这些数据以字符串的形式存储。这个字符串可以用于网络传输、文件存储或其他需要序列化数据的场景。

    // 反序列化
    person pp;
    pp.ParseFromString(output_str);

    std::cout << pp.age() << std::endl;
    std::cout << pp.id() << std::endl;
    std::cout << pp.sex() << std::endl;
    std::cout << pp.name() << std::endl;

    cout<<pp.addr().addr()<<endl;
    cout<<pp.addr().num()<<endl;
  }
};

int main(int argc, char *argv[]) {
  MyTest T;
  T.test();

  return 0;
}