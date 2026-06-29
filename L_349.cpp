#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<set>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                       a.insert(nums1[i]);
                       break;
                }
            }
        }
        for(auto i=a.begin();i!=a.end();++i)
        {
            ans.push_back(*i);
        }
       return  ans;

       
    }
};
int main()
{
  Solution s;
  vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int> ans = s.intersection(nums1,nums2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}