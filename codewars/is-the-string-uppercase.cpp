#include <string>

bool is_uppercase(const std::string &s) {
  for(char c : s)
    if (c > 96 && c < 123)
      return false;
  return true;
}
