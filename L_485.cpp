#include <iostream>
#include <vector>
using namespace std;
#include <math.h>
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
                maxCount = max(count, maxCount);
            }
            else
                count = 0;
        }
        return maxCount;
    }
};
#include <iostream>
using namespace std;

int main()
{
    Solution s;
    vector<int> a = {1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0};
    cout << s.findMaxConsecutiveOnes(a);
    return 0;
}