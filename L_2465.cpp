#include <iostream>
using namespace std;
#include <vector>
#include <set>
#include <algorithm>
class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        set<int> ans;
        int idxF = 0;

        int idxL = nums.size() - 1;
        for (int i = 1; i <= nums.size() / 2; i++)
        {

            float avg = nums[idxF] + nums[idxL];
            ans.insert(avg);
            idxF++;
            idxL--;
        }
        return ans.size();
    }
};
int main()
{
    Solution s;
    vector<int> op = {4, 1, 4, 0, 3, 5};
    cout << s.distinctAverages(op);
    return 0;
}