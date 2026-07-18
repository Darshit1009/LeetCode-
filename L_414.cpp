#include <vector>
#include <iostream>
#include<set>
#include<algorithm>
using namespace std;
class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        //  reverse(nums.begin(),nums.end());
        set<int> a;
        if (nums.size() == 0)
        {
            return 0;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            a.insert(nums[i]);
        }

        if (a.size() >= 3)
        {
            int count = 0;
            for (auto it = a.rbegin(); it != a.rend(); ++it)
            {
                count++;
                if (count == 3)
                    return *it;
            }
        }

        if (a.size() < 3)
        {
            return *a.rbegin();
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> num = {1, 2, 3, 2, 4, 5};

    cout << s.thirdMax(num);
    return 0;
}