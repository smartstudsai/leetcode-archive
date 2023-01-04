class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mp;
        unordered_map<int, int> :: iterator itr;

        for(int i: tasks) 
            mp[i] += 1;
        
        int ans = 0;
        for(itr = mp.begin(); itr != mp.end(); itr++) {
            if(itr->second == 1)
                return -1;
            else if(itr->second == 2)
                ans += 1;
            else 
                ans += (itr->second % 3 == 0) ? itr->second/3: itr->second/3 + 1;
        }

        return ans;
    }
};
