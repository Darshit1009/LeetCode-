#include <iostream>
#include<vector>    
using namespace std;
#include<algorithm>

class Solution {
public:
    string trafficSignal(int timer) {
        if(timer==0)
        {
                return "Green";
        }
        if(timer==30)
        {
            return "Orange";
        }
        if(timer>30&&timer<=90)
        {
            return "Red";
        }
        return "Invalid";
    }
};
int  main()
{
  Solution s;
  int timer = 5;
  string ans = s.trafficSignal(timer);
  cout<<ans;
  return 0;
}
