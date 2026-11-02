#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> limitOccurrences(vector<int> &nums, int k)
    {
        vector<int> ans;
        unordered_map<int, int> frq;
        unordered_map<int, bool> visited;

        for (int i = 0; i < nums.size(); i++)
        {
            frq[nums[i]]++;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!visited[nums[i]])
            {
                visited[nums[i]] = true;

                if (frq[nums[i]] >= k)
                {
                    ans.insert(ans.end(), k, nums[i]);
                }
                else
                {
                    ans.insert(ans.end(), frq[nums[i]], nums[i]);
                }
            }
        }

        return ans;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> q = {1, 2, 3};
    vector<int> ans = s.limitOccurrences(q, 2);
    for (int i : ans)
    {
        cout << i;
    }
    return 0;
}
