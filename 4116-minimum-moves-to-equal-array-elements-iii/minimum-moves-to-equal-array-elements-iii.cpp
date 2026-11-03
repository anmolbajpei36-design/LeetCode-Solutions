class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            sum+= nums[n-1] - nums[i];
        }
        return sum;
    }
};