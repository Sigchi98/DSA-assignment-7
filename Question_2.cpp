class Solution {
public:
    bool isStrobogrammatic(string num) {
        unordered_map<char, char> strobogrammaticMap = {
            {'0', '0'},
            {'1', '1'},
            {'6', '9'},
            {'8', '8'},
            {'9', '6'}
        };
    
        int left = 0;
        int right = num.length() - 1;
    
        while (left <= right) {
            char leftChar = num[left];
            char rightChar = num[right];
          
            if (strobogrammaticMap.find(leftChar) == strobogrammaticMap.end() || strobogrammaticMap[leftChar] != rightChar)
                return false;
        
            left++;
            right--;
        }
    
        return true;
        }
};
