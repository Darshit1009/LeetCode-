#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int commonFactors(int a, int b)
    {
        int count = 0;
        vector<int> A;
        vector<int> B;

        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                A.push_back(i);
            }
        }
        for (int i = 1; i <= b; i++)
        {
            if (b % i == 0)
            {
                B.push_back(i);
            }
        }

        // compare divisors
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < B.size(); j++)
            {
                if (A[i] == B[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    cout << s.commonFactors(15, 20);
    return 0;
}