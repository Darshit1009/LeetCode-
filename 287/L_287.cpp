#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++)
         {
            ans[nums[i]]++;
         }
         for(int i=0;i<ans.size();i++)
         {
            if(ans[i]>1)
            {
                return i;
            }
         }
         return -1;
    }
};
int main()
{
    Solution s;
    vector<int> a={1,3,4,2,2};
    cout<<s.findDuplicate(a);
    return 0;
}