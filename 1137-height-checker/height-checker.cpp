class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> v(n);
        for(int i=0;i<n ;i++){
            v[i]= heights[i];
        }
        int count =0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]!=heights[i]){
                count++;
            }
        }
     return count;
    }
};