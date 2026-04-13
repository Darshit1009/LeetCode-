#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    int averageValue(vector<int> &nums)
    {
        int count = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 6 == 0)
            {
                sum += nums[i];
                count++;
            }
        }
        return count >= 1 ? sum / count : 0;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << s.averageValue(a);
    return 0;
}