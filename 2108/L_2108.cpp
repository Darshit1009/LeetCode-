// 2108. Find First Palindromic String in the Array
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        string ans = "";
        for (int i = 0; i < words.size(); i++)
        {
            ans = words[i];
            reverse(ans.begin(), ans.end());
            if (ans == words[i])
            {
                return words[i];
            }
        }
        return "";
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<string> w = {"abc", "car", "ada", "racecar", "cool"};
    cout << s.firstPalindrome(w);
    return 0;
}
