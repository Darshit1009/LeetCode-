#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> countBits(int n)
    {
        int j = 0;
        vector<int> final;
        for (int i = 0; i <= n; i++)
        {
            final.push_back(countOnes(i));
        }
        return final;
    }
    int countOnes(int n)
    {
        int count = 0;
        while (n > 0)
        {
            count += (n & 1);
            n >>= 1;
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<int> a;
    a = s.countBits(5);
    for (int i : a)
    {
        cout << i;
    }
    return 0;
 }