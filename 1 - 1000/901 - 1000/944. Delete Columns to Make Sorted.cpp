class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int row = strs.size();
        int col = strs[0].size();
        
        int ans = 0;
        
        for(int j=0; j<col; j++) {
            char ch = strs[0][j];
            for(int i=1; i<row; i++) {
                if(ch <= strs[i][j]) {
                    ch = strs[i][j];
                }
                else {
                    ++ans;
                    break; 
                }
            }
        }
        
        return ans;
    }
};
