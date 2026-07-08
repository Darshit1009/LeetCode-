#include<iostream>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }

            }
        }
    }
};
int main()

{
    Solution s;
    vector<int> a={1,24,5,8};

    s.sortColors(a);
    return 0;
}