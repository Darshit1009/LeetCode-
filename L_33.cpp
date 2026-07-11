#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==target)
        {
            return i;
        }
       }
       return -1; 
    }
};
int main()
{
    Solution s;
    vector<int> a={1,2,3,4,5,6};
    cout<<s.search(a,5);
    return 0;
}