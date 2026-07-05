#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1||nums.size()==0||nums.size()==2)
        {
           return -1;
        }
        else return nums[1];
    }
};
int main()
{
 Solution s;
 vector<int> a={1,2,3};
 cout<<s.findNonMinOrMax(a);
 return -1;
}