#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {

        for (int i = 0; i < arr.size(); i++)
        {
            int maxi = INT_MIN;
            for (int j = i + 1; j < arr.size(); j++)
            {
                maxi = max(maxi, arr[j]);
            }
            arr[i] = maxi;
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};
int main(int argc, char const *argv[])
{
    Solution S;
    vector<int> q = {400};
    vector<int> ans = S.replaceElements(q);
    for (int i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
