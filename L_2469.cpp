#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        vector<double> n;
        double kelvin = celsius + 273.15;
        double fahrenhit = (celsius * 1.80) + 32.00;
        n.push_back(kelvin);
        n.push_back(fahrenhit);
        return n;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<double> result;

    result = s.convertTemperature(36.50);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "\n";
    }
    return 0;
}
