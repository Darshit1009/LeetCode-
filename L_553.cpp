#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    string optimalDivision(vector<int> &nums)
    {
        if (nums.empty())
            return "";

        if (nums.size() == 1)
            return to_string(nums[0]);

        if (nums.size() == 2)
            return to_string(nums[0]) + "/" + to_string(nums[1]);

        string ans = to_string(nums[0]) + "/(";
        for (int i = 1; i < nums.size(); ++i)
        {
            ans += to_string(nums[i]);
            if (i != nums.size() - 1)
                ans += "/";
        }
        ans += ")";
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> a{2, 3, 4};
    cout << s.optimalDivision(a) << endl;
    return 0;
}