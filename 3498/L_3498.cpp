#include <bits/stdc++.h>
using namespace std;
// 3498. Reverse Degree of a String
class Solution
{
public:
    int findIndex(char a)
    {
        return 'z' - a + 1;
    }
    int reverseDegree(string s)
    {
        int sum = 0;
        if (s.size() == 0)
        {
            return 0;
        }
        for (int i = 0; i < s.size(); i++)
        {
            int prd = findIndex(s[i]) * (i + 1);
            sum += prd;
        }
        return sum;
    }
};
int main()
{
    Solution S;
    cout << S.reverseDegree("abc");
    return 0;
}