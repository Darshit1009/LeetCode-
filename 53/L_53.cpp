#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int res = arr[0];
        int end = arr[0];
        for (int i = 1; i < nums.size(); i++)
        {
            end = max(arr[i], arr[i] + end);
            res = max(res, end);
        }
        return res;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << s.maxSubArray(a);
    return 0;
}
