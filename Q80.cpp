
// 80. Remove Duplicates from Sorted Array 2
#include <iostream>
#include <vector>
class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {

    std::vector<int> temp = {};
    int num;
    int count = 0;

    for (int i : nums) {

      if (temp.size() == 0) {
        num = i;
        temp.push_back(i);
        count++;
      } else {

        if (i != num) {

          num = i;
          count = 0;
        }

        if (count < 2) {
          temp.push_back(i);
          count++;
        }
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

  std::vector nums = {1, 1, 1, 2, 2, 3};

  int len = s.removeDuplicates(nums);

  std::cout << "Length " << len << std::endl;

  for (int i : nums) {

    std::cout << i << std::endl;
  }

  return 0;
}
