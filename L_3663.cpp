#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getLeastFrequentDigit(int n)
    {
        vector<int> storeV;
        vector<int> freq(10, 0);
        while (n > 0)
        {
            int rem = n % 10;
            freq[rem]++;
            // storeV.push_back(rem);
            n = n / 10;
        }
        // reverse(freq.begin(), freq.end());
        int min = INT_MAX;
        int idx = 11;
        for (int j = 0; j < freq.size(); j++)
        {
            if (freq[j] > 0)
            {
                if (freq[j] < min)
                {
                    min = freq[j];
                    idx = j;
                }
            }
        }
        return idx;
    }
};
int main()
{
    Solution s;
    cout << s.getLeastFrequentDigit(723344511);
    return 0;
}