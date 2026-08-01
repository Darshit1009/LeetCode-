#include <bits/stdc++.h>
using namespace std;
// class Solution
// {
// public:
// bool isGood(vector<int> &nums)
// {
//     if (nums.size() == 2)
//     {
//         if (nums[0] == 1 && nums[1] == 1)
//         {
//             return true;
//         }
//     }
//     sort(nums.begin(), nums.end());
//     int max = *max_element(nums.begin(), nums.end());
//     vector<int> ans;
//     int n = 1;
//     for (int i = 0; i < nums.size() - 1; i++)
//     {
//         ans.push_back(n);
//         n++;
//     }
//     ans.push_back(n);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         if (i == ans.size() - 1)
//         {
//             if (ans[i] == ans[i - 1])
//             {
//                 return true;
//             }
//         }
//         if (ans[i] == ans[i - 1] && i != ans.size())
//         {
//             return false;
//         }
//     }
//     return false;
class Solution
{
public:
    bool isGood(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] != i + 1)
            {
                return false;
            }
        }
        if (nums[n - 1] != n - 1)
        {
            return false;
        }
        return true;
    }
};

int main()
{
    Solution s;
    vector<int> que = {1, 3, 3, 2};
    cout << s.isGood(que);
    return 0;
}