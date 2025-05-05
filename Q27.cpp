
// 27. Remove Element

#include <iostream>
#include <vector>

class Solution {
public:
  int removeElement(std::vector<int> &nums, int val) {

    std::vector<int> temp = {};

    for (int i : nums) {

      if (i != val) {
        temp.push_back(i);
      }
    }
    nums.clear();

    for (int i : temp) {
      nums.push_back(i);
    }

    return nums.size();
  }
};

int main(int argc, char *argv[]) {

  Solution s;

  std::vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
  int result = s.removeElement(nums, 2);
  std::cout << "Result " << result << std::endl;

  return 0;
}
