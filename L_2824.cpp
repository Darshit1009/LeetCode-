#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    int countPairs(vector<int> &nums, int target)
    {
        int c = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {

                {
                    if (nums[i] + nums[j] < target)
                    {
                        if (i < j && j < nums.size())
                        {
                            c++;
                        }
                    }
                }
            }
        }
        return c;
    }
};
int main()
{
    Solution s;
    vector<int> a = {-6, 2, 5, -2, -7, -1, 3};
    cout << s.countPairs(a, -2);
    return 0;
}
