#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        
       int evenCOuntIDX=0;
       int oddCountIDX=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                ans[evenCOuntIDX]=nums[i];
                evenCOuntIDX+=2;
            }
            else
            {
                ans[oddCountIDX]=nums[i];
                oddCountIDX+=2;
            }
        }
        return ans;
       
    }
};
int main()
{
    Solution s;
    // s.sortArrayByParityII({4,2,5,7});
    vector<int> nums = {4, 2, 5, 7};
    vector<int> ans = s.sortArrayByParityII(nums);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}