#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    long long removeZeros(long long n) {
     string s=to_string(n);
     string ans="";
     for(int i=0;i<s.size();i++)
     {
        if(s[i]!='0')
        {
        ans.push_back(s[i]);
        }
     }
     return stoll(ans);

    }
};
int main()
{
    Solution s;
    cout<<s.removeZeros(1020030);
    return 0;
}