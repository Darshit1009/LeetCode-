#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    int smallestEqual(vector<int> &nums)
    {
        int index = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 10 == nums[i])
            {
                //  index=i;
                if (i < index)
                {
                    index = i;
                }
            }
        }
        if (index == INT_MAX)
        {
            return -1;
        }
        return index;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums = {0, 1, 2};
    cout << s.smallestEqual(nums);
    return 0;
}
