class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums)
            mp[x]++;
      for(auto x:nums){
          if(mp[x] == 0) continue;
          int freq = mp[x], count=0, curr=x;
          while(mp.count(curr) && mp[curr]>=freq){
              freq = max(freq,mp[curr]);
                 mp[curr]--;
              count++;
              curr++;
          }
         if(count<3)
                return false; 
      }
        return true;
    }
};