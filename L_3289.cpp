// 3289. The Two Sneaky Numbers of Digitville
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> getSneakyNumbers(vector<int> &nums)
    {
        vector<int> ans(500);
        for (int i = 0; i < nums.size(); i++)
        {
            ans[nums[i]]++;
        }
        vector<int> ret;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == 2)
            {
                ret.push_back(i);
            }
        }
        return ret;
    }
};
int main()
{
    vector<int> ques = {0, 1, 1, 0};
    Solution s;
    cout << s.getSneakyNumbers(ques);
    return 0;
}