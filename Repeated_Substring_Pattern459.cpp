#include <iostream>

using namespace std;
bool repeatedSubstringPattern(string s)
{
    string str = "";
    for (int i = 0; i < s.size(); i++)
    {
        string j = "abcabc";
        for (int k = 0; k < j.size(); k++)
        {
            str if (j[k] == j[i])
            {
                break;
            }
        }
    }

    cout << str;
}

int main(int argc, char const *argv[])
{
    repeatedSubstringPattern("abcabc");
    return 0;
}
