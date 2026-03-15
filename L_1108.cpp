#include <iostream>
using namespace std;
#include <string>

class Solution
{
public:
    string defangIPaddr(string address)
    {
        string ans = "";

        for (int i = 0; i < address.size(); i++)
        {
            if (address[i] == '.')
                ans += "[.]";
            else
                ans += address[i];
        }

        return ans;
    }
};
int main()
{
    Solution d;
    string s = "1.1.1.1";
    cout << d.defangIPaddr(s);

    return 0;
}