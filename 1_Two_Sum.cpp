#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    }
    return {-1, -1};
}
int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 4};
    int target = 3;
    vector<int> result = twoSum(nums, target);

    return 0;
}
