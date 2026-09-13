#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumCost(vector<int> &cost)
    {
        sort(cost.begin(), cost.end(), greater<>());
        int sum = 0;
        for (int i = 0; i < cost.size(); i++)
        {
            sum += cost[i];
        }
        int n = 2;

        while (n < cost.size())
        {
            sum -= cost[n];
            n += 3;
        }

        return sum;
    }
};
int main()
{
    Solution s;
    vector<int> q = {5, 5};
    cout << s.minimumCost(q);
    return 0;
}