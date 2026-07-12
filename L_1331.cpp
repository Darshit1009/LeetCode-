#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

#include <algorithm>
class Solution
{
public:
  vector<int> arrayRankTransform(vector<int> &arr)
  {
    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());
    vector<int> ans;
    unordered_map<int, int> mp;
    int rank = 1;

    for (int i = 0; i < sorted.size(); i++)
    {
      if (mp.find(sorted[i]) == mp.end()) // value not present
      {
        mp[sorted[i]] = rank;
        rank++;
      }
    }

    for (int i = 0; i < arr.size(); i++)
    {
      ans.push_back(mp[arr[i]]);
    }
    return ans;
  }
};
int main()
{
  // Solution s;
  vector<int> arr = {40, 10, 10, 20, 30};
  Solution s;
  vector<int> ans = s.arrayRankTransform(arr);
  for (int i : ans)
  {
    cout << i << " ";
  }

  return 0;
}
