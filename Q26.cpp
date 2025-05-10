

// 27. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {

    std::vector<int> temp = {};

    int num = nums[0];
    temp.push_back(num);

    for (int i : nums) {

      if (i != num) {
        temp.push_back(i);
        num = i;
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

  std::vector nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

  int len = s.removeDuplicates(nums);

  std::cout << "Length " << len << std::endl;

  for (int i : nums) {

    std::cout << i << std::endl;
  }

  return 0;
}
