#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    int sumOfVector(vector<int> &nums)
    {
        vector<int> ans;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                sum = sum + nums[i];
            }
        }
        return sum;
    }
    vector<int> sumEvenAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
    {
        // int sum = 0;

        vector<int> ans;
        for (int i = 0; i < queries.size(); i++)
        {

            int j = queries[i][1];
            int k = queries[i][0];
            nums[j] = nums[j] + k;
            int a = sumOfVector(nums);
            ans.push_back(a);
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 4};
    Solution s;
    vector<vector<int>> query = {{1, 0},
                                 {-3, 1},
                                 {-4, 0},
                                 {2, 3}};
    vector<int> ans = s.sumEvenAfterQueries(nums, query);
    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
