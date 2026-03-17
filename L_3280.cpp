
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:

    string toBinary(int num) {
        string res = "";
        while (num > 0) {
            res = char((num % 2) + '0') + res;
            num /= 2;
        }
        return res;
    }

    string convertDateToBinary(string date) {
        
               string year = date.substr(0, 4);
        string month = date.substr(5, 2);
        string day = date.substr(8, 2);

       
        int y = stoi(year);
        int m = stoi(month);
        int d = stoi(day);

       
        string by = toBinary(y);
        string bm = toBinary(m);
        string bd = toBinary(d);

       return by + "-" + bm + "-" + bd;
    }
};
int main()
{
    Solution s;
    cout<<s.convertDateToBinary("2004-10-15");
    return 0;
}