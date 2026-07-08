#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
          while(i<matrix.size())
          {
            for(int j=0;j<matrix[0].size();j++)
            {
               
                
                 if(matrix[i][j]==target)
                  {
                    return true;
                   }
               
               
            }
            i++;
          }
        
        return false;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> a={{1,2,3,4},{11,12,13,14}};
    cout<<boolalpha;
    cout<<s.searchMatrix(a,13);
   return 0; 
 }