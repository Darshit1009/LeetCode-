#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
class Solution
{
public:
    vector<int> numberGame(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int i = 0;
        vector<int> ans;
        vector<int> even;
        vector<int> odd;
        while (i < nums.size())
        {
            if (i % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
            i++;
        }
        for (int i = 0; i < even.size(); i++)
        {
            ans.push_back(odd[i]);
            ans.push_back(even[i]);
        }
        return ans;
    }   
};
int main()
{
    Solution s;
    vector<int> q1 = {5, 4, 2, 3};
    vector<int> an = s.numberGame(q1);
    for (int i : an)
    {
        cout << i << " ";
        
    }
    return 0;
}