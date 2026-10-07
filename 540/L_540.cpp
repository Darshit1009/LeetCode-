#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int r = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            r ^= nums[i];
        }
        return r;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> ans = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << s.singleNonDuplicate(ans);
    return 0;
}
