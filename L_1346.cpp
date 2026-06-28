#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(i!=j)
                {
                    if(arr[i]==2*arr[j])
                    {
                        return true;
                    }
                }
            }
        }
        return false;
       
    }
};
main()
{
    Solution s;
    vector<int> arr={10,2,5,3};
    cout<<s.checkIfExist(arr);
    
    return 0;
}