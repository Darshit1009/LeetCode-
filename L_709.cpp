#include <iostream>
using namespace std;
#include <string>
#include<algorithm>
class Solution
{
public:
    string toLowerCase(string s)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};
int main()
{
    Solution s;
    cout << s.toLowerCase("DarshitKacha");
    return 0;
}