#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> toggleLightBulbs(vector<int> &bulbs)
    {
        // vector<int> ans;
        vector<int> frq(101, 0);

        int c = 0;
        sort(bulbs.begin(), bulbs.end());
        for (int i = 0; i < bulbs.size(); i++)
        {
            frq[bulbs[i]]++;
        }
        vector<int> ans;
        for (int i = 0; i < frq.size(); i++)
        {
            if (frq[i] % 2 != 0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> bulbs = {10, 20, 30, 10};
    vector<int> ans=s.toggleLightBulbs(bulbs);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
