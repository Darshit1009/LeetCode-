#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int sumOfEncryptedInt(vector<int> &nums)
    {
        int j = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            j = fD(nums[i]);
            sum += j;
        }
        return sum;
    }
    int fD(int i)
    {
        int max = 0;
        string s = to_string(i);

        char maxdigit = *max_element(s.begin(), s.end());
        string a = "";
        for (int i = 0; i < s.size(); i++)
        {
            a += to_string(maxdigit);
        }
        return stoi(a);
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 2, 3};
    cout << s.sumOfEncryptedInt(a);
    return 0;
}