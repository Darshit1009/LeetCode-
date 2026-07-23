#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <algorithm>
// Given an integer array of size n, find all elements that appear more than ⌊n / 3⌋ times.
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> record;
        for (int i : nums)
        {
            record[i]++;
        }
        vector<int> ans;
        for (const auto &pair : record)
        {
            if (pair.second > nums.size() / 3)
            {
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> question = {3, 2, 3};
    vector<int> ans = s.majorityElement(question);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
