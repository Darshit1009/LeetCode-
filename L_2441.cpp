#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        int siz=nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] + nums[i] == 0)
                {
                    ans.push_back(nums[j]);
                }
            }
        }
        int maxi=INT_MIN;
        for(int i =0;i<ans.size();i++)
        {
           maxi=max(ans[i],maxi);
        }
        return maxi;
    }
};

int main()
{
    Solution s;
    vector<int> a={-1,2,-3,3};

    int b=s.findMaxK(a);
    cout<<b;
    return 0;
}