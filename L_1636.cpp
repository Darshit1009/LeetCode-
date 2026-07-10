#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
#include <unordered_map>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>

// class Solution {
// public:
//     std::vector<int> frequencySort(std::vector<int>& nums) {
//         // Step 1: Count the frequency of each number
//         std::unordered_map<int, int> count;
//         for (int num : nums) {
//             count[num]++;
//         }

//         // Step 2: Sort using a lambda function as a custom comparator
//         std::sort(nums.begin(), nums.end(), [&](int a, int b) {
//             // If frequencies are different, sort by increasing frequency
//             if (count[a] != count[b]) {
//                 return count[a] < count[b];
//             }
//             // If frequencies tie, sort by decreasing value
//             return a > b;
//         });

//         return nums;
//     }
// };

class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {

        unordered_map<int, int> frq;
        for (int i : nums)
            frq[i]++;
        //  vector<vector<int>> v;
        //  for(auto a:frq)
        //  {
        //     v.push_back({a.second,a.first});
        //  }
        std::sort(nums.begin(), nums.end(), [&](int a, int b)
                  {
//             // If frequencies are different, sort by increasing frequency
            if (frq[a] != frq[b]) {
                return frq[a] < frq[b];
            }
            // If frequencies tie, sort by decreasing value
            return a > b; });

        return nums;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 2, 3, 4, 4};
    vector<int> ans = s.frequencySort(a);
    for (int i = 0; i < ans.size(); i++)
    {
       
            cout << ans[i] << " ";
        
    }
    return 0;
}