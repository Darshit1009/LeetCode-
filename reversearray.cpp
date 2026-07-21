#include <vector>
#include<algorithm>
#include <iostream>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        for (int i : nums)
        {
            cout << i;
        }
    }
};
int main(int argc, char const *argv[])
{
    vector<int> num = {12, 10, 9, 21, 25};
    Solution s;
    s.rotate(num, 5);

    // 25,21,9,10,12
    // 21,25,9,10,12
    // 21,25,12,10,9
    //  another way best

    // int temp = nums[nums.size() - 1];
    //    for (int i = nums.size() - 1; i > 0; i--)
    //     {
    //         nums[i] = nums[i - 1];
    //     }
    // nums[0] = temp;

    // int prev = nums[0];
    // for (int i = 1; i < nums.size(); i++)
    // {
    //     int first = nums[i];
    //     nums[i] = prev;
    //     prev = first;
    // }
    // nums[0]=prev;

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    return 0;
}
