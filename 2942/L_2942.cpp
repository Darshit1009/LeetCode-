#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> index;
        for (int i = 0; i < words.size(); i++)
        {
            string ans = words[i];
            for (int j = 0; j < ans.size(); j++)
            {
                if (ans[j] == x)
                {
                    index.push_back(i);
                    break;
                }
            }
        }
        return index;
    }
};
int main()
{
    Solution s;
    vector<string> q = {"leet", "code"};
    vector<int> ans = s.findWordsContaining(q, 'e');
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}