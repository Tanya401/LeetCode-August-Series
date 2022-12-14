class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       //ransomnote -> magazine letters
        unordered_map<char,int> mp;
        for(auto x:magazine){
            mp[x]++;
        }
        for(int i=0;i<ransomNote.size();i++){
         if(mp.find(ransomNote[i]) == mp.end())
             return false;
            if(mp[ransomNote[i]] == 0)
                return false;
            mp[ransomNote[i]]--;
        }
        return true;
    }
};