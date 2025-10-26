// Find the Majority Element in given Array
// it should be appear more than n/2 where n is array size
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {

        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
            if (count > nums.size() / 2)
            {
                return nums[i];
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> p = {1, 2, 2, 2, 3};
    cout << s.majorityElement(p);
    return 0;
}