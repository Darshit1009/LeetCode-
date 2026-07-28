#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int countDigitOccurrences(vector<int> &nums, int digit)
    {

        int c = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            while (a > 0)
            {
                int rem = a % 10;
                if (rem == digit)
                {
                    c++;
                }
                a = a / 10;
            }
        }
        return c;
        // string ans = "";
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     ans += to_string(nums[i]);
        // }
        // int c = 0;
        // for (int i = 0; i < ans.size(); i++)
        // {
        //     if (nums[i] == digit +'0')
        //     {
        //         c++;
        //     }
        // }
        // return c;
    }
};
int main()
{
    Solution s;
    vector<int> question = {12, 54, 32, 22};

    cout << s.countDigitOccurrences(question, 2);
    return 0;
}