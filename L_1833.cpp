#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
       sort(costs.begin(),costs.end()); 
       int sum=0;
       int c=0;
       for(int i=0;i<costs.size();i++)
       {
        if(sum+costs[i]<=coins)
        {
            sum+=costs[i];
            c++;
        }
       }
       return c;
    }
};
int main()
{
  Solution s;
  vector<int> costs = {1,3,2,4,1};
  int coins = 7;
  int ans = s.maxIceCream(costs,coins);
  cout<<ans;
  return 0;
}