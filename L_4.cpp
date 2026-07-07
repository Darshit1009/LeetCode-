#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int> ans(nums1.size()+nums2.size());
      int i=0;
      while(i<ans.size())
      {
        if(i<nums1.size())
        {
            ans[i]=nums1[i];
        }
        else {
            ans[i] = nums2[i - nums1.size()];
        }
        i++;
      }
      sort(ans.begin(),ans.end());
      if(ans.size()%2==0)
      {
       return (ans[ans.size()/2] + ans[(ans.size()/2)-1]) / 2.0;
      }
        else {
        return double(ans[ans.size()/2]);
      }
      return -1;
    }
};
int main()
{
    Solution s;
    vector<int> a={1,2,3};
    vector<int> b={5,4};
    cout<<s.findMedianSortedArrays(a,b);
    return 0;
}