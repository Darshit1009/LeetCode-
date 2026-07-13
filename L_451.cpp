#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> a;

        for (int i = 0; i < s.size(); i++)
        {
            a[s[i]]++;
        }

        vector<pair<char, int>> op;
        for (auto x : a)
        {
            op.push_back(x);
        }

        sort(op.begin(), op.end(), [](pair<char, int> &x, pair<char, int> &y)
             { return x.second > y.second; });

        string ans = "";

        for (int i = 0; i < op.size(); i++)
        {
            ans += string(op[i].second, op[i].first);
        }

        return ans;
    }
};
int main()

{
    Solution s;
    cout << s.frequencySort("tree");
    return 0;
}
