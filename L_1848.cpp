#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#define INT_MAX 8000000
class Solution
{
public:
    int getMinDistance(vector<int> &nums, int target, int start)
    {
        int indexT = 0;
        int minDist = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {

            if (target == nums[i])
            {
                indexT = i;
                minDist = min(minDist, abs(i - start));
            }
        }
        return nums[start] == target ? 0 : minDist;
        return 0;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 2, 3, 4, 5, 5, 6};
    cout << s.getMinDistance(a, 6, 1);
    return 0;
}