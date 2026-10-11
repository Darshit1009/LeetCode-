// 1437. Check If All 1's Are at Least Length K Places Away
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool kLengthApart(vector<int> &nums, int k)
    {
        vector<int> dst;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                dst.push_back(i);
            }
        }

        for (int i = 1; i < dst.size(); i++)
        {
            if (dst[i] - dst[i - 1] - 1 < k)
            {
                return false;
            }
        }
        return true;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> q = {1, 0, 0, 0, 1, 0, 0, 1};
    cout << s.kLengthApart(q, 2);
    return 0;
}
