#include <string>

std::string fakeBin(std::string str){
  for(int i = 0; i < str.length(); i++) {
    if(int(str[i]) < 5) {
      str[i] = '0';
    }
    else {
      str[i] = '1';
    }
  }
  return str;
}
