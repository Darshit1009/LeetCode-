#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {

        int digit = 0;
        int finaldigit = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            finaldigit += nums[i];
            while (nums[i] > 0)
            {

                sum += nums[i] % 10;
                nums[i] /= 10;
            }
        }
        cout << finaldigit << "\n";
        cout << sum;
        return abs(finaldigit - sum);
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> b = {1, 15, 6, 3};
    int result;
    result = s.differenceOfSum(b);
    cout << result << "\n";
    return 0;
}
