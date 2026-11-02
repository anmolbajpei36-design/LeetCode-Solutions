class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i<= n/2){
                sum+= nums[n/2]-nums[i];
            }
            else{
                sum+= nums[i] - nums[n/2];
            }
        }
        return sum;
    }
};