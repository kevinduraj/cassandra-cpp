C++ for Cassandra
=================

## Copy cassandra-cpp-driver.rb
* copy https://gist.github.com/mpenick/2333627bb6fd44476eb7 to /usr/local/Library/Formula/


## Install homebrew and packages

```
ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
brew link openssl
brew link --force openssl
brew install cassandra-cpp-driver
brew doctor
brew list
```

## Sample Usage
```
./cassandra_cpp 192.168.1.159 "SELECT * FROM engine.link LIMIT 10" 2
```

## Sample Output
```
1|puntolibre.org|http://www.puntolibre.org
2|puntolibre.org|http://www.puntolibre.org/
3|puntolibre.org|http://www.puntolibre.org/chuukyuu/
4|puntolibre.org|http://www.puntolibre.org/chuukyuu/akushitsu/
5|puntolibre.org|http://www.puntolibre.org/chuukyuu/muryou/
6|puntolibre.org|http://www.puntolibre.org/chuukyuu/sakura/
7|puntolibre.org|http://www.puntolibre.org/feed/
8|puntolibre.org|http://www.puntolibre.org/jyoukyuu/
9|puntolibre.org|http://www.puntolibre.org/jyoukyuu/date/
10|puntolibre.org|http://www.puntolibre.org/jyoukyuu/nagatsuduki/
```

## References:

* https://github.com/datastax/cpp-driver
* https://github.com/datastax/cpp-driver/tree/master/cmake/modules
* https://github.com/mpenick/cpp-driver-example


