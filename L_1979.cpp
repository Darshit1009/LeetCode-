#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int division(int num, int val)
    {
        while (val != 0)
        {
            int j = val;
            val = num % val;
            num = j;
        }
        return num;
    }

    int findGCD(vector<int> &nums)
    {
        int max = nums[0];
        int k = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < k)
            {
                k = nums[i];
            }
        }

        return division(max, k);
    }
};

int main()
{
    vector<int> nums = {2, 5, 6, 9, 10};
    Solution s;
    cout << s.findGCD(nums) << endl;
    return 0;
}