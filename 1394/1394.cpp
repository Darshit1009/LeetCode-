#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        vector<int> freq(501, 0);
        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }
        vector<int> great;
        for (int i = 0; i < arr.size(); i++)
        {
            if (freq[arr[i]] == arr[i])
            {
                great.push_back(arr[i]);
            }
        }
        if (great.empty())
        {
            return -1;
        }
        int max = *max_element(great.begin(), great.end());

        return max;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> ques = {2, 2, 2, 3, 3};
    cout << s.findLucky(ques);
    return 0;
}
