#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string categorizeBox(int length, int width, int height, int mass)
    {
        long long volume = 1LL * width * length * height;
        bool bulky = (width >= 10000 || length >= 10000 || height >= 10000 || volume >= 1000000000);
        bool heavy = (mass >= 100);

        if (bulky && heavy)
            return "Both";
        else if (bulky)
            return "Bulky";
        else if (heavy)
            return "Heavy";
        else
            return "Neither";
    }
};

int main()
{
    Solution s;
    cout << s.categorizeBox(10000, 20, 20, 30);
    return 0;
}