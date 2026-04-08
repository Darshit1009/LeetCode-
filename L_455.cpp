#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0;
        int count = 0;

        while(i < g.size() && j < s.size()) {
            if(s[j] >= g[i]) {
                count++;
                i++;
                j++;
            } else {
                j++;
            }
        }

        return count;
    }
};
int main()
{
    Solution s;
    vector<int> a={1,2,3,4};
    vector<int> d={5,6,7,8};
    cout<<s.findContentChildren(a,d);
    return 0;
}