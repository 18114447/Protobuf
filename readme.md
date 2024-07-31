# 1、protobuf环境安装
源代码下载地址：https://github.com/protocolbuffers/protobuf/releases

```shell
tar zxvf protobuf-cpp-3.21.12.tar.gz 
cd protobuf-3.21.12/
./configure 
make
sudo make install
```

# 2、运行
```shell
cd test/
protoc ./person.proto --cpp_out=./
mkdir build
cd build/
cmake ..
make

```shell
cd ..
mkdir build
cd build/
cmake ..
make
```
## 测试结果
```
./protoMain
```