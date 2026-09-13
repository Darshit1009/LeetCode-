#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
        sort(happiness.begin(), happiness.end(), greater<>());

        long long sum = 0;

        for (int i = 0; i < k; i++)
        {
            sum += max(0, happiness[i] - i);
        }

        return sum;
    }
};
int main()
{
    Solution s;
    vector<int> q = {1, 2, 3};
    cout << s.maximumHappinessSum(q, 2);
    return 0;
}