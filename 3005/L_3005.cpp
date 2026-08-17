#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        vector<int> fr(101, 0);
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            fr[nums[i]]++;
        }

        int max = *max_element(fr.begin(), fr.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (fr[nums[i]] == max)
            {
                count += max;
            }
        }
        return count / max;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> q = {1, 2, 3, 4, 5};
    cout << s.maxFrequencyElements(q);
    return 0;
}
