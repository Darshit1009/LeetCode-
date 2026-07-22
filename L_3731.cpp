#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
class Solution
{
public:
    vector<int> findMissingElements(vector<int> &nums)
    {
        vector<int> freq(100000);
        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        vector<int> ans;
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        for (int i = min; i < max; i++)
        {
            if (freq[i] == 0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> q = {1, 2, 3, 6};
    vector<int> ans = s.findMissingElements(q);
    for (int i : ans)
    {
        cout << i;
    }
    return 0;
}