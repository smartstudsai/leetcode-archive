class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        
        if(n == 1) return 1;
        
        sort(points.begin(), points.end());
        
        int ans = 1;
        int i = 0, cmp = points[i][1];
        while(i < n) {
            if(cmp >= points[i][0]) {
                cmp = min(cmp, points[i][1]);
                i += 1;
            }
            else {
                ans += 1;
                cmp = points[i][1];
            }
        }

        return ans;
    }
};
