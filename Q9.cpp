
// 9. Palindrome

#include <iostream>

class Solution {
public:
  bool isPalindrome(int x) {

    long int rev = 0;
    long int num = x;

    if (x < 0) {
      return false;
    }

    while (num != 0) {
      rev = (rev * 10) + (num % 10);
      num = num / 10;
    }

    return (rev == x);
  }
};

int main(int argc, char *argv[]) {

  Solution s = Solution();

  if (s.isPalindrome(-121)) {

    std::cout << "Its Palindrome";
  } else {

    std::cout << "Its not Palindrome";
  }

  return 0;
}
