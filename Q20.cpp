
// 20. Valid Parentheses

#include <cstdio>
#include <iostream>
#include <string>
class Solution {
public:
  bool isValid(std::string s) {

    std::string result;
    int count = 0;

    if (s.length() < 2 || s.length() % 2 != 0) {
      return false;
    }

    for (int i = 0; i < s.length(); i++) {

      if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
        result += s[i];
        count++;
        continue;
      }

      if (s[i] == ']' || s[i] == '}' || s[i] == ')') {

        if (count == 0) {
          return false;
        }

        if (result[count - 1] != '(' && s[i] == ')' ||
            result[count - 1] != '[' && s[i] == ']' ||
            result[count - 1] != '{' && s[i] == '}') {

          result += s[i];
          count++;
        } else {

          count--;
          result.pop_back();
        }
      }
    }

    return (count == 0);
  }
};

int main(int argc, char *argv[]) {

  Solution s;
  bool r = s.isValid("(([]){})");
  std::cout << "Result is " << r << std::endl;
  return 0;
}
