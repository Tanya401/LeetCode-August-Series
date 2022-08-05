class Solution {
public:
    int maxProduct(vector<int>& nums) {
       // int prod = 1;
       //  int maxp=INT_MIN;
       //  for(int i=0;i<nums.size();i++){
       //      if(nums[i] < 0 && prod>0)
       //          maxp = max(maxp,prod);
       //       if(nums[i]  > prod)
       //          prod = nums[i];
       //       prod = prod*nums[i];
       //  }
       //  return maxp;
        int l=1, r=1, maxp = INT_MIN;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            l=l*nums[i];
            r=r*nums[n-1-i];
            maxp = max(maxp,max(l,r));
            if(l==0) l=1;
            if(r==0) r=1;
        }
        return maxp;
    }
};