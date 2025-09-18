#include <iostream>
using namespace std;
char findTheDifference(string s, string t)
{
    int ascii1 = 0;
    int ascii2 = 0;
    int sub;
    for (int i = 0; i < s.size(); i++)
    {
        ascii1 += s[i];
    }
    for (int i = 0; i < t.size(); i++)
    {
        ascii2 += t[i];
    }

    return static_cast<char>(ascii2 - ascii1);
}
int main(int argc, char const *argv[])
{
    cout << findTheDifference("abcd", "abcde");
    return 0;
}
