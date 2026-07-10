// 1913. Maximum Product Difference Between Two Pairs
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return (nums[nums.size()-1]*nums[nums.size()-2])-(nums[0]*nums[1]);
    }
};
int main()
{
    Solution s;
    vector<int> a={1,2,3,4,5,6,7};
    cout<<s.maxProductDifference(a);
    return 0;
}
