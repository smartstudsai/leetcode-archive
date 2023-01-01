class Solution {
public:
    vector<string> generate(string s) {
        stringstream ss(s);
        string word;
        
        vector<string> v;
        while(ss >> word)
            v.push_back(word);
        
        return v;
    }

    bool wordPattern(string pattern, string s) {
        vector<string> v = generate(s);

        unordered_map<char, int> mp1;
        unordered_map<string, int> mp2;
        vector<int> n1, n2;

        int i1 = 0;
        for(char ch: pattern) {
            if(mp1.find(ch) != mp1.end()) {
                n1.push_back(mp1[ch]);    
            }
            else {
                i1 += 1;
                mp1[ch] = i1;
                n1.push_back(mp1[ch]);
            }
        }
        
        int i2 = 0;
        for(string str: v) {
            if(mp2.find(str) != mp2.end()) {
                n2.push_back(mp2[str]);
            }
            else {
                i2 += 1;
                mp2[str] = i2;
                n2.push_back(mp2[str]);
            }
        }
        
        return (n1 == n2);
    }
};
