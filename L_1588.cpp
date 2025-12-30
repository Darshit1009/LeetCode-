#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int n = arr.size();
        int total = 0;

        for (int i = 0; i < n; i++)
        {
            int leftChoices = i + 1;
            int rightChoices = n - i;
            int totalSubarrays = leftChoices * rightChoices;

            int oddCount = (totalSubarrays + 1) / 2;

            total += arr[i] * oddCount;
        }

        return total;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {1, 4, 2, 5, 3};
    cout << sol.sumOddLengthSubarrays(arr) << endl;
    return 0;
}