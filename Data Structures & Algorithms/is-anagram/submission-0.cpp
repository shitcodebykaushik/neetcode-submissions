class Solution {
public:
    bool isAnagram(string s, string t) {
        // If the length of the two string differe then return false immediately 
        if(s.length() != t.length()) {
            // != this symbol means 
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};
