#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int fix = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            int count = 0;
            while (num > 0)
            {
                num /= 10;
                count++;
            }
            if (count % 2 == 0)
            {
                fix++;
            }
        }
        return fix;
    }
};

int main()
{
    Solution s;
    vector<int> test = {1, 2, 33, 5, 4};
    int result = s.findNumbers(test);
    cout << result << endl;
    return 0;
}