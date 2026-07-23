#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {

        unordered_map<int, int> m1;
        unordered_map<int, int> m2;
        for (int i : nums1)
        {
            m1[i]++;
        }
        for (int i : nums2)
        {
            m2[i]++;
        }
        vector<int> ans;

        for (auto &p : m1)
        {
            int key = p.first;

            if (m2.count(key))
            {
                int freq = min(p.second, m2[key]);

                while (freq--)
                {
                    ans.push_back(key);
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> question = {1, 2, 2, 1};
    vector<int> question2 = {2, 2};

    vector<int> ans = s.intersect(question2, question);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}