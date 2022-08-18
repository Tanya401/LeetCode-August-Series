class Solution {
public:
    int minSetSize(vector<int>& arr) {
      unordered_map<int,int> mp;
        int n = arr.size();
        int s=0;
        int ans=0;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<int> freq;
        for(auto x: mp){
            freq.push_back(x.second);
        }
        sort(freq.begin(),freq.end(),greater<int>());
        for(int i=0;i<freq.size(),s<n/2;i++){
            ans++;
            s+=freq[i];
        }
        return ans;
    }
};