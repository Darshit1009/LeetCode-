#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double minPrice(vector<int> &prices, vector<int> &discounts)
    {
        vector<int> price;
        // Correct syntax for descending order
        sort(prices.begin(), prices.end(), greater<int>());

        // price = prices;
        // reverse(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end(), greater<int>());
        // reverse(discounts.begin(), discounts.end());
        double double sum = 0;
        // float calc = 0;
        // int jk = -1;
        int mini = min(discounts.size(), prices.size());

        for (int i = 0; i < mini; i++)
        {
            // jk++;
            float calc = float(prices[i] * (100 - discounts[i])) / 100;
            // cout << calc << " ";
            sum += calc;
        }
        if (prices.size() > discounts.size())
        {
            for (int i = discounts.size(); i < prices.size(); i++)
            {
                sum += prices[i];
            }
        }

        return sum;
    }
};

int main()
{
    Solution s;
    vector<int> prices = {10, 30, 21};
    vector<int> discounts = {50, 60};
    cout << s.minPrice(prices, discounts);
    return 0;
}