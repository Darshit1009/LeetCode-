#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        vector<int> returna;
        int carry = k;
        int i = num.size() - 1;

        while (i >= 0 || carry > 0)
        {
            if (i >= 0)
            {
                carry += num[i];
                i--;
            }
            returna.push_back(carry % 10);
            carry /= 10;
        }

        reverse(returna.begin(), returna.end());

        for (int d : returna)
        {
            cout << d;
        }
        cout << endl;

        return returna;
    }
};

int main()
{
    Solution s;
    vector<int> a = {1, 2, 3, 4};
    s.addToArrayForm(a, 99999);
    return 0;
}