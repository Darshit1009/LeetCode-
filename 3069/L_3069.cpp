#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> resultArray(vector<int> &nums)
    {
        vector<int> firstarr;
        vector<int> secondarr;
        firstarr.push_back(nums[0]);
        secondarr.push_back(nums[1]);
        for (int i = 2; i < nums.size(); i++)
        {
            if (firstarr[firstarr.size() - 1] > secondarr[secondarr.size() - 1])
            {
                firstarr.push_back(nums[i]);
            }
            else
            {
                secondarr.push_back(nums[i]);
            }
        }
        vector<int> ans = firstarr;
        for (int i : secondarr)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> q = {2, 1, 3};
    vector<int> final = s.resultArray(q);
    for (int i : final)
    {
        cout << i << " ";
    }
    return 0;
}
