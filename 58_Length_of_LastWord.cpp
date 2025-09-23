#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int lengthOfLastWord(string s)
{
    // Trim trailing spaces
    while (!s.empty() && s.back() == ' ')
    {
        s.pop_back();
    }

    // Reverse the string in-place
    std::reverse(s.begin(), s.end());

    int c = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (std::isalpha(s[i]))
        {
            c++;
        }
        else if (s[i] == ' ')
        {
            break;
        }
    }

    return c;
}

int main(int argc, char const *argv[])
{
    cout << lengthOfLastWord("darshit kacha satishbhai");
    return 0;
}