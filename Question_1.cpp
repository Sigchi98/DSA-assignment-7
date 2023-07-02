class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;
    
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
            // If characters in s have the same mapping to characters in t
            // but characters in t have different mappings to characters in s,
            // then the strings are not isomorphic.
                if ((s[i] == s[j] && t[i] != t[j]) || (s[i] != s[j] && t[i] == t[j]))
                    return false;
            }
        }
    
        return true;
    }
};
