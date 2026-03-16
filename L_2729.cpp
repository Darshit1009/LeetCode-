#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isFascinating(int n)
    {
        string s = to_string(n);
        int y = n * 2;
        int z = n * 3;

        string ans = to_string(y) + to_string(z) + s;

        if (ans.size() != 9)
            return false;

        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == '0')
                return false;

            for (int j = i + 1; j < ans.size(); j++)
            {
                if (ans[i] == ans[j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    Solution S;
    cout << boolalpha << S.isFascinating(10);
    return 0;
}