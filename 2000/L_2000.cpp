#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        int x = -1;
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == ch)
            {
                x = i;
                break;
            }
        }
        int i = 0;
        while (i < x)
        {
            swap(word[i], word[x]);
            i++;
            x--;
        }
        return word;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.reversePrefix("abcdefd", 'd');
    return 0;
}
