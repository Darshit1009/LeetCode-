#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                cnt1++;
            }
        }
        for (int i = s.size() / 2; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                cnt2++;
            }
        }
        return cnt1 == cnt2;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    // String s = "book";
    cout << s.halvesAreAlike("book");
    return 0;
}
