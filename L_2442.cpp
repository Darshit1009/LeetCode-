#include <iostream>
using namespace std;
#include <vector>
#include <set>
class Solution
{
public:
    int reversed(int n)
    {
        int num = 0;
        while (n > 0)
        {
            int rem = n % 10;
            num = num * 10 + rem;
            n /= 10;
        }
        return num;
    }

    int countDistinctIntegers(vector<int> &nums)
    {
        set<int> st;

        for (int x : nums)
        {
            st.insert(x);
            st.insert(reversed(x));
        }

        return st.size();
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums = {1, 13, 10, 12, 31};
    cout << s.countDistinctIntegers(nums) << endl;
    return 0;
}
