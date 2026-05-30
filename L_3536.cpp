#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    int maxProduct(int n)
    {
        vector<int> turntoDIGIT;

        while (n != 0)
        {
            int rem = n % 10;
            // vector<int> turntoDIGIT;
            turntoDIGIT.push_back(rem);
            n = n / 10;
        }
        // int i=0;
        int product = 1;
        int maxi = INT16_MIN;
        // int size = turntoDIGIT.size() - 1;
        for (int i = 0; i < turntoDIGIT.size(); i++)
        {
            int j = i + 1;
            while (j < turntoDIGIT.size())
            {
                product = turntoDIGIT[i] * turntoDIGIT[j];
                maxi = max(maxi, product);
                j++;
            }
        }
        return maxi;
    }
};
int main()
{
    Solution s;
    cout << s.maxProduct(1505);
    return 0;
}