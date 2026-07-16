#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string convertBinary(int a)
    {
      
        string rem;
      
        if(a==0)
        {
            return "0";
        }
        while (a > 0)
        {
            rem += to_string(a % 2);
            a = a / 2;
        }
        reverse(rem.begin(), rem.end());
        return rem;
    }
    int countOnes(string s)
    {

        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }
        return count;
    }
    vector<int> sortByBits(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<pair<int, int>> v;
        for (int x : arr)
        {
            string bin = convertBinary(x);
            int ct = countOnes(bin);
            v.emplace_back(ct, x);
        }
        sort(v.begin(), v.end());

        vector<int> result;
        result.reserve(v.size());
        for (auto &p : v)
            result.push_back(p.second);
        return result;
    }
};
int main()
{
    Solution s;
    vector<int> darshit = {0, 1, 3, 5, 7};

    vector<int> ans = s.sortByBits(darshit);
    for (int i : ans)
    {
        cout << i;
    }
    return 0;
}