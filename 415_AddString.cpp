#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addStrings(string num1, string num2)
{
    string result = "";
    int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry)
    {
        int x = i >= 0 ? num1[i--] - '0' : 0;
        int y = j >= 0 ? num2[j--] - '0' : 0;
        int sum = x + y + carry;
        result += (sum % 10) + '0';
        carry = sum / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string num1 = "123";
    string num2 = "987";
    cout << addStrings(num1, num2) << endl;
    return 0;
}