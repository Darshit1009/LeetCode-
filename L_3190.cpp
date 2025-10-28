#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 3 != 0)
            {
                count++;
            }
        }
        return count;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> n = {1, 2, 3, 4};
    cout << s.minimumOperations(n);
    return 0;
}
