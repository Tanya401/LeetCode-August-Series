class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> maxh;
        for(auto row : matrix){
            for(auto col: row){
                maxh.push(col);
                if(maxh.size()>k)
                    maxh.pop();
            }
        }
        return maxh.top();
    }
};

