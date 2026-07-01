#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size=m+n;
        vector<int> ans(size);
        for(int i=0;i<m+n;i++)
        {
            if(i<m)
            {
                ans[i]=nums1[i];
            }
            else
            {
                ans[i]=nums2[i-m];
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<size;i++)
        {
            nums1[i]=ans[i];
        }
    }
};
int main()  
{
    Solution s;
     vector<int> nums1 = {1,2,3,0,0,0};
     vector<int> nums2 = {2,5,6};
     s.merge(nums1,3,nums2,3);
     for(int i=0;i<6;i++)
     {
         cout<<nums1[i]<<" ";
     }
     return 0;   
}