
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maximumGap(vector<int>& nums) {
     if(nums.size()==1){
        return 0;
     }
     sort(nums.begin(),nums.end());

     int diff=nums[1]-nums[0];
     for(int i=2;i<nums.size();i++)  
     {
        int diffR=nums[i]-nums[i-1];
        if(diffR>diff)
        {
            diff=diffR;
        }
     } 
     return diff;
    }
};
int main()
{
    vector<int> a={1,2,3,4};
    Solution s;
    cout<<s.maximumGap(a);
    return 0;
}