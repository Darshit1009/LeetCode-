
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int sumOfSquares(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {

            if (n % (i + 1) == 0)
            {
                sum += nums[i] * nums[i];
            }
        }
        return sum;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> q = {1, 2, 3, 4};
    cout << s.sumOfSquares(q);
    return 0;
}
