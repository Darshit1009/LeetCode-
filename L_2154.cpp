#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==original)
            {
                original=original*2;
            }
        }
        return original;
    }
};
int main()
{
    Solution S:
    vector<int> nums={5,3,6,1,12};
    cout<<S.findFinalValue(nums,3);   
    return 0;
}