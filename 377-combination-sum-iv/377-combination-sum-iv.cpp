class Solution {
public:
    int func(int i,int j,vector<int>&nums,vector<vector<int>>&dp){
 //        if(target==0)
 //            return 1;
 //        if(target<0)
 //            return 0;
 //        int temp = 0;
 //        for(int i=0;i<ind;i++){
 //        temp = func(ind-1,target,nums);
 //        if(nums[ind] <=  target){
 //            temp += func(ind,target-nums[ind],nums);
 //        }
 //        }
 //        return temp;
 // }
 //    int combinationSum4(vector<int>& nums, int target) {
 //        int n = nums.size();
 //        int ans = func(n-1,target,nums);
 //        return ans;
 //    }
         if (j==0) return 1;
        if (i==nums.size()) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        int take=0;
        int not_take=func(i+1,j,nums,dp);
        if(j>=nums[i]) take = func(0,j-nums[i],nums,dp);
        return dp[i][j] = take+not_take;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(target+1,-1));
        return func(0,target,nums,dp);
    }
};