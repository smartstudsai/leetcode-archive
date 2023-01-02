class Solution {
public:
    bool detectCapitalUse(string word) {
        bool res;
        
        bool b1 = true;        
        for(char ch: word) {
            if(ch > 'Z') {
                b1 = false;
                break;
            }
        }
        
        bool b2 = true;
        for(char ch: word) {
            if(ch < 'a') {
                b2 = false;
                break;
            } 
        }
        
        bool b3 = (word[0] < 'a') ? true: false;
        for(int i=1; i<word.size(); i++) {
            if(word[i] < 'a') {
                b3 = false;
                break;
            }
        }
        
        res = b1 || b2 || b3;
        return res;
    }
};
