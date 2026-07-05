#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
class Solution
{
public:
    double minimumAverage(vector<int> &nums)
    {
        int i = 0;
        double mini=INT_MAX;
        int j = nums.size() - 1;
        vector<double> ans;
        sort(nums.begin(), nums.end());
        while (i < nums.size() && i < j)
        {
            double avg=float(nums[i]+nums[j])/2;
            ans.push_back(avg);
            i++;j--;
        }
        for(int i=0;i<ans.size();i++)
        {
          mini=min(ans[i],mini);
        }
        return mini;

    }
};

int main()
{
    Solution s;
    vector<int> a = {7, 8, 3, 4, 15, 13, 4, 1};
    cout << s.minimumAverage(a);
    return 0;
}