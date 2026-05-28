#include <iostream>
using namespace std;
#include <string>
// class Solution
// {
// public:
//     string largestOddNumber(string num)
//     {
//         string s = "";
//         int a = std::stoi(num);
//         if (a % 2 != 0)
//         {
//             return to_string(a);
//         }
//         while (a != 0)
//         {
//             if (a % 2 == 0)
//             {
//                 a = a / 10;
//                 if (a % 2 != 0)
//                 {
//                     return to_string(a);
//                 }
//             }
//         }
//         return s;
//     }
// }; code is working but overflow due to 10^5 number .
class Solution
{
public:
    string largestOddNumber(string num)
    {
        string s = "";
        int i = num.size() - 1;

        while (i >= 0)
        {
            int a = num[i] - '0';

            if (a % 2 == 0)
            {
                i--;
            }
            else
            {
                return num.substr(0, i + 1);
            }
        }

        return s;
    }
};
int main()
{
    Solution b;
    cout << b.largestOddNumber("456");
    return 0;
}