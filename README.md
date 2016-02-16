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

## References:

* https://github.com/mpenick/cpp-driver-example


