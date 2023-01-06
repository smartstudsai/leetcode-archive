class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        sort(costs.begin(), costs.end());

        int i=0, ans=0;
        while(i < n) {
            if(coins >= costs[i]) {
                ans += 1;
                coins -= costs[i];
                ++i;
            }
            else break;
        }

        return ans;
    }
};
