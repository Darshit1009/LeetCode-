#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                return nums1[i];
            }

            if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> a={1,2,3,4};
    vector<int> b={2,3,4,5};

    cout<<s.getCommon(a,b);
    return 0;
}