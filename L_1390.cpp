#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        int totalSum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            int sum = 0;
            for (int j = 1; j <= nums[i]; j++)
            {
                if (nums[i] % j == 0)
                {
                    ++count;
                    sum += j;
                    if (count > 4)
                        break;
                }
            }

            if (count == 4)
            {
                totalSum += sum;
            }
        }

        return totalSum;
    }
};

int main()
{
    Solution s;
    vector<int> d = {21, 4, 7};
    cout << s.sumFourDivisors(d);

    return 0;
}