
#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <algorithm>
class Solution
{
public:
    vector<int> maxKDistinct(vector<int> &nums, int k)
    {

        // Solution s;
        // vector<int> q1 = {1, 5, 4, 6, 2, 2, 3, 4};
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        int sum = 0;
        // int k = 3;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0 || nums[i] != nums[i - 1])
            {
                ans.push_back(nums[i]);
                if (ans.size() == k)
                    break;
            }
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> q1 = {1, 5, 4, 6, 2, 2, 3, 4};
    
    vector<int> ans=s.maxKDistinct(q1,5);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}