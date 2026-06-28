#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
class Solution {
public:
    int maxProduct(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size()-1;
    int p=nums[n]-1;
    int r=nums[n-1]-1;
    return p*r;
    }
};
int main()
{
    Solution s;
    vector<int> nums={3,4,5,2};
    cout<<s.maxProduct(nums);
    
    return 0;
}