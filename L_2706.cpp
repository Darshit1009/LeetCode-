#include <vector>
#include <iostream>
using namespace std;
#include <algorithm>
class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        int origin =money;
        sort(prices.begin(), prices.end());
        int c = 0;
        if (prices.size() < 2)
        {
            return money;
        }
        for(int i=0;i<2;i++)
        {
            if(money>=prices[i])
            {
                money-=prices[i];
                c++;
            }

        }
        if(c<2)
        {
         return origin;   
        }
        return money;
    }
};
int main()
{
    Solution s;
    vector<int> ap = {3, 2, 3};
    cout << s.buyChoco(ap,3);
    return 0;
}