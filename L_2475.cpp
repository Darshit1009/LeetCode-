#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
      int c=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]!=nums[j]&&nums[i]!=nums[k]&&nums[j]!=nums[k])
                    {
                        c++;
                    }
                }
            }
        }
        return c;
    }
};
int main()
{
    Solution s;
    vector<int> q={4,4,2,4,3};
    cout<<s.unequalTriplets(q);
    return 0;
}