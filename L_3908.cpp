#include<iostream>

using namespace std;
#include<string>

class Solution {
public:
    bool validDigit(int n, int x) {
        string s = to_string(n);

        if (s[0] == ('0' + x)) {
            return false;
        }

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == ('0' + x)) {
                return true;
            }
        }

        return false;
    }
};
int main()
{
    Solution s;
    cout<<boolalpha;
    cout<<s.validDigit(15,5);
return 0;
}