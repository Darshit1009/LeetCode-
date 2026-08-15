#include <iostream>
using namespace std;
#include <unordered_map>
#include <vector>
#include <set>
#include <algorithm>
class Solution
{
public:
  vector<int> intersection(vector<vector<int>> &nums)
  {
    unordered_map<int, int> fre;
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = 0; j < nums[i].size(); j++)
      {
        fre[nums[i][j]]++;
      }
    }
    set<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = 0; j < nums[i].size(); j++)
      {
        if (fre[nums[i][j]] >= nums.size())
        {
          ans.insert(nums[i][j]);
        }
      }
    }
    std::vector<int> ans2(ans.begin(), ans.end());
    return ans2;
  }
};
int main()
{
  Solution s;
  vector<vector<int>> q = {{3, 1, 2, 4, 5}, {1, 2, 3, 4}, {3, 4, 5, 6}};
  vector<int> ans = s.intersection(q);
  for (int i : ans)
  {
    cout << i << " ";
  }
  return 0;
}