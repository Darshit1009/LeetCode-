#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        map<int, int> freq;
        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (freq[nums[i]] == 1)
            {
                return nums[i];
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> q = {0, 1, 0, 1, 0, 1, 99};
    cout << s.singleNumber(q);
    return 0;
}