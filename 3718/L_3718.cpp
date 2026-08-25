#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int missingMultiple(vector<int> &nums, int k)
    {
        set<int> countNumber;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % k == 0)
            {
                countNumber.insert(nums[i]);
            }
        }
        int i = k;
        for (auto it : countNumber)
        {
            if (it != i)
            {
                return i;
            }
            i = i + k;
        }
        return i;
    }
};
int main()

{
    Solution s;
    vector<int> q = {83, 96, 34, 56, 48, 30, 7, 14, 77, 66, 66, 66, 21, 17, 38, 7, 9};
    cout << s.missingMultiple(q, 7);
    return 0;
}