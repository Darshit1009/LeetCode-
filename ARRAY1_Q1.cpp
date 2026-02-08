#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(2 * n);
        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = nums[i];
        }
        for (int j = 0; j < nums.size(); j++)
        {
            ans[j + n] = nums[j];
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> num = {1, 2, 30};

    vector<int> a = s.getConcatenation(num);
    for (int j : a)
    {
        cout << j;
    }
    return 0;
}
