#include<iostream>
#include<vector>

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       int n=nums.size()-1;
       int sum=0;
       for(int i=1;i<=k;i++)
       {
        sum+=nums[n];
        nums[n]=nums[n]+1;
        
         

       }
       return sum;

    }
};