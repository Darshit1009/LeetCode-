#include <iostream>
using namespace std;
#include <vector>
#include <set>

class Solution
{
public:
    int findPairs(vector<int> &nums, int k)
    {
        int c = 0;
        vector<bool> why(nums.size(), true);
        set<set<int>> a;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {

                if (i != j)
                {
                    if (abs(nums[j] - nums[i]) == k)
                    {
                        a.insert({nums[i], nums[j]});
                    }
                }
            }
        }
        return a.size();
    }
};
int main()
{
    Solution s;
    vector<int> a = {3, 1, 4, 1, 5};
    int b = s.findPairs(a, 2);
    cout << b;
    return 0;
}