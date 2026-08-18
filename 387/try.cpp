#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ab = "aaabbcdde";
    map<char, int> fr;
    for (int i = 0; i < ab.size(); i++)
    {
        fr[ab[i]]++;
    }
    char a;
    for (int i = 0; i < ab.size(); i++)
    {
        if (fr[ab[i]] == 1)
        {
            a = ab[i];
            break;
        }
    }
    cout << a;
    return 0;
}