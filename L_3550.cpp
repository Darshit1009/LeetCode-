#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
 int sumofDIGIT(int i)
       {
         int temp=0;
        while(i>0)
        {
           int rem=i%10;
           temp+=rem;
            i=i/10;
        }
        return temp;
       }
    int smallestIndex(vector<int>& nums) {
       

       for(int i=0;i<nums.size();i++)
       {
        int sum=sumofDIGIT(nums[i]);
         if(sum==i)
         {
            return i;
         }
       }
      
       return -1;
    }

};