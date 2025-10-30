// reverse the vowel in given string
/*Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
Example 1:
Input: s = "IceCreAm"
Output: "AceCreIm"
Explanation:
The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
        string a;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
                s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                a.push_back(s[i]);
            }
        }

        reverse(a.begin(), a.end());

        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
                s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                s[i] = a[j++];
            }
        }

        return s;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    string b;
    b = s.reverseVowels("IceCreAm");
    cout << b;
    return 0;
}