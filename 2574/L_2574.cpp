#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int leftsum = 0;
        int rightsum = 0;
        vector<int> leftV(nums.size());
        vector<int> rightV(nums.size());
        vector<int> ans;
        leftV[0] = 0;
        for (int i = 1; i <= leftV.size() - 1; i++)
        {
            leftsum += nums[i - 1];
            leftV[i] = leftsum;
        }
        rightV[nums.size() - 1] = 0;
        for (int i = 1; i < rightV.size(); i++)
        {
            rightsum += nums[i];
        }
        rightV[0] = rightsum;
        for (int i = 1; i < rightV.size(); i++)
        {
            rightsum -= nums[i];
            rightV[i] = rightsum;
        }
        for (int i = 0; i < rightV.size(); i++)
        {
            ans.push_back(abs(rightV[i] - leftV[i]));
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> n = {1};
    vector<int> ans = s.leftRightDifference(n);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}