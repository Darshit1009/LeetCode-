#include <unordered_map>
#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> f;
        for (int i : arr)
        {
            f[i]++;
        }
        vector<int> freqAns;
        for (const auto &pair : f)
        {
            if (pair.second > 1)
            {
                freqAns.push_back(pair.second);
            }
        }
        sort(freqAns.begin(), freqAns.end());
        for (int i = 1; i < freqAns.size(); i++)
        {
            if (freqAns[i] == freqAns[i - 1])
            {
                return false;
            }
        }
        return true;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> q = {1, 2, 2, 1, 1, 3};
    cout << boolalpha;
    cout << s.uniqueOccurrences(q);
    return 0;
}
