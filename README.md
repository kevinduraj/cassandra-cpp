C++ for Cassandra
=================

## Installation on CentOS
```sh
cd /opt
yum -y install libuv-static.x86_64
git clone https://github.com/datastax/cpp-driver.git
mkdir -p cpp-driver/build
cd cpp-driver/build
cmake ..
make
make install
```


## Compile and run 
```sh
#!/bin/bash
rm -fR build
mkdir build
cd build
cmake ..
make
./nootrino 192.168.1.159 "select * from  cloud4.vdomain limit 20"
```

## Sample Output
```
1|mattmoskovciak.com
2|decoybetty.com
3|thegreenwineguide.com
4|accu-profi.de
5|greatlakesgelatin.com
6|emeditor.com
7|aptoide.com
8|heartsinhealthcare.com
9|online-language-translations.co.uk
10|katiesquiltingcorner.com
```


```sh
mkdir build
cd build
cmake ..
```

## Mac OS install homebrew and packages

```
ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
brew link openssl
brew link --force openssl
brew install cassandra-cpp-driver
brew doctor
brew list
```

## References:

* https://github.com/datastax/cpp-driver
* https://github.com/datastax/cpp-driver/tree/master/cmake/modules
* https://github.com/mpenick/cpp-driver-example
