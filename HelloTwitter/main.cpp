
#include <iostream>
#include <process.h>
#include <string>


void tweet(const std::string& _str) {
  std::string ctw("start ../ctw/ctw.exe -p ");
  std::string decL("'");
  std::string decR("'");
  std::string cmd; cmd += ctw; cmd += decL; cmd += _str; cmd += decR;
  std::cout << cmd.c_str();
  system(cmd.c_str());
}

int main() {
  tweet("");
}