
// 66. Plus One

#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> plusOne(std::vector<int> &digits) {

    std::vector<int> temp;

    bool isAll = true;

    for (int i : digits) {

      if (i != 9) {
        isAll = false;
        break;
      }
    }

    if (isAll) {
      temp.push_back(0);
    }

    for (int i : digits) {
      temp.push_back(i);
    }

    for (int i = temp.size() - 1; i >= 0; i--) {

      if (temp[i] != 9) {
        temp[i] = temp[i] + 1;
        break;
      } else {

        temp[i] = 0;
      }
    }

    return temp;
  }
};

int main(int argc, char *argv[]) {
  Solution s = Solution();

  std::vector<int> numbers = {9, 9};

  std::vector<int> results = s.plusOne(numbers);
  for (int r : results) {
    std::cout << r << std::endl;
  }

  return 0;
}
