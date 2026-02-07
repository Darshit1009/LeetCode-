#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution
{
public:
    int sumOfEncryptedInt(vector<int> &nums)
    {
        int sum = 0;
        for (int x : nums)
        {
            sum += encrypt(x);
        }
        return sum;
    }

    int encrypt(int n)
    {
        string s = to_string(n);

        char maxDigit = *max_element(s.begin(), s.end());

        string encrypted(s.size(), maxDigit); // clean & fast

        return stoi(encrypted);
    }
};

int main()
{
    Solution s;
    vector<int> a = {1, 2, 3};
    cout << s.sumOfEncryptedInt(a);
    return 0;
}