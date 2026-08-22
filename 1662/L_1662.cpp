#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string ans = "";
        string ans2 = "";

        for (int i = 0; i < word1.size(); i++)
        {
            ans += word1[i];
        }
        for (int i = 0; i < word2.size(); i++)
        {
            ans2 += word2[i];
        }
        return ans2 == ans;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};
    cout << s.arrayStringsAreEqual(word1, word2);
    return 0;
}
