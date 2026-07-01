#include <bits/stdc++.h>
#include <vector>
using namespace std;
#include <algorithm>
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
         for(int i=0;i<heights.size();i++)
    {
        for(int j=0;j<heights.size();j++)
        {
            if(heights[j]<heights[i])
            {
                swap(heights[j],heights[i]);
                swap(names[j],names[i]);
            }
        }
    }
    return names;
    }
};
int main()
{
    Solution s;
    vector<string> names = {"Mary", "John", "Emma"};
    vector<int> heights = {180, 165, 170};
    vector<string> ans = s.sortPeople(names, heights);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}