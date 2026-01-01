#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j <= i + k && j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> k = {1, 2, 3, 4, 1};
    cout << boolalpha;
    cout << s.containsNearbyDuplicate(k, 3);
    return 0;
}