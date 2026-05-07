class Solution {
public:
    int heightChecker(vector<int>& heights) {
     vector<int> s;
     int count;
     for(int i=0;i<heights.size();i++)
     {
        s[i]=heights[i];
     }
     sort(heights.begin(),heights.end());
     for(int i=0;i<heights.size();i++)
     {
         if(s[i]!=heights[i]){
            count++;
         }
     }
     return count;   
    }

};
int main()
{
    SOlution s;
    vector<int> a={1,5,4,6,8,7,9};
    cout<<s.heightChecker(a);
    return 0;
}