#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum=0;
        if(salary.size()==2)
        {
            return  0;
        }
        int count=0;
        for(int i=1;i<salary.size()-1;i++)
        {
        sum+=salary[i];
          count++;
        }
        return double(sum/count);
    }
};
int main()
{
    Solution s;
    vector<int> salary={4000,3000,1000,2000};
    cout<<s.average(salary);
    
    return 0;
}