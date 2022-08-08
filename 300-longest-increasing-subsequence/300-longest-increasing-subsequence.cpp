class Solution {
public:
//     int func(int ind,int prev_ind,vector<int>&nums,vector<vector<int>>&dp){
//         if(ind == nums.size()) return 0;
//         // if(ind == 0){
//         //     if(nums[ind] < nums[prev_ind])
//         //         return 1;
//         //     else return 0;
//         // }
//         if(dp[ind][prev_ind+1]!=-1) return dp[ind][prev_ind+1];
//         int ans = 0 + func(ind+1,prev_ind,nums,dp);
      
//         if(prev_ind == -1 || nums[ind] > nums[prev_ind]){
//             ans =  max(ans, 1 + func(ind+1,ind,nums,dp));
//         }
//         return dp[ind][prev_ind+1] = ans;
// }
//     int lengthOfLIS(vector<int>& nums) {
//        int n = nums.size();
//         vector<vector<int>> dp(n,vector<int>(n+1,-1));
//         return func(0,-1,nums,dp);
//     }
    int recur(int i,int prev_ind,vector<int>& nums,vector<vector<int>>&dp){
        if(i==nums.size()){
            return 0;
        }
        if(dp[i][prev_ind+1]!=-1) return dp[i][prev_ind+1];
       
       int len=0+recur(i+1,prev_ind,nums,dp);
        
        if(prev_ind==-1 || nums[i]>nums[prev_ind]){
            len=max(len,1+recur(i+1,i,nums,dp));
        }
        return dp[i][prev_ind+1]= len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return recur(0,-1,nums,dp);
    }
};