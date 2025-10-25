#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mid;
            else if (target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }

        return -1;
    }
};
int main()
{
    Solution sol;
    vector<int> d = {1, 3, 4, 5};
    cout << sol.search(d, 4);
    return 0;
}