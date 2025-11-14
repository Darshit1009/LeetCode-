#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> final(nums.size());
        int i = 0;
        int j = nums.size() - 1;
        int k = nums.size() - 1;

        while (i <= j)
        {
            if (abs(nums[i]) > abs(nums[j]))
            {
                final[k] = nums[i] * nums[i];
                i++;
            }
            else
            {
                final[k] = nums[j] * nums[j];
                j--;
            }
            k--;
        }

        return final;
    }
};

int main()
{
    Solution s;
    vector<int> a = {-4, -1, 0, 3, 10};
    vector<int> result = s.sortedSquares(a);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}