#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
class Solution
{
public:
    // vector<int> separateFun(int n)
    // {
    //     vector<int> ans;
    //     while (n > 0)
    //     {
    //         int rem = n % 10;
    //         ans.push_back(rem);
    //         n = n / 10;
    //     }
    //     return ans;
    // }
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            vector<int> temp;
            while (nums[i] > 0)
            {
                int rem = nums[i] % 10;
                temp.push_back(rem);
                nums[i] = nums[i] / 10;
            }
            reverse(temp.begin(), temp.end());
            for (int j = 0; j < temp.size(); j++)
            {
                ans.push_back(temp[j]);
            }
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> que = {13, 25, 83, 77};
    vector<int> a = s.separateDigits(que);
    for (int i : a)
    {
        cout << i << "";
    }
    return 0;
}
