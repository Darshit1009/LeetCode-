#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
         sort(nums.begin(),nums.end()); 
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
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
    vector<int> nums={1,2,5,2,3};
    int target=2;
    vector<int> ans=s.targetIndices(nums,target);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}