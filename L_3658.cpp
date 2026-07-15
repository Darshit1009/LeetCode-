#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int i=1;
       int j=2;
       int sume=0;
       int sumo=0;
       for(int k=1;k<=n;k++)
       {
        sume+=j;
        sumo+=i;
        i+=2;
        j+=2;
       }
       return __gcd(sume,sumo);
       // second approach is the  find sum of even number and odd number derive formula and find gcd using recursive 
    }
};

int main()
{
    Solution s;
    cout<<s.gcdOfOddEvenSums(4);
    return 0;
}