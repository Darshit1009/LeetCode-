#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    s.isAnagram("dadrshit", "aasdasda");
    return 0;
}
