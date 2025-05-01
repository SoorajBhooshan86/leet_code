
// 58. Length of Last Word

#include <iostream>
#include <string>

class Solution {
public:
  int lengthOfLastWord(std::string s) {

    std::string lastWord;
    int pos = 0;

    for (int i = 0; i < s.length(); i++) {

      if (s[i] != ' ') {

        lastWord = s.substr(pos, i + 1 - pos);
        continue;
      }

      pos = i + 1;
    }

    return lastWord.length();
  }
};

int main(int argc, char *argv[]) {

  Solution s = Solution();

  int lengthOfString = s.lengthOfLastWord("This is nice");
  std::cout << "Length of last word is " << lengthOfString << std::endl;

  return 0;
}

template <typename T> void print(const T &value) {
  std::cout << value << std::endl;
}
