class Solution {
public:
    bool backspaceCompare(string s, string t) {
      stack<char> stackS, stackT;
    
    // Build stack for string s
      for (char c : s) {
        if (c != '#') {
          stackS.push(c);
        } else if (!stackS.empty()) {
            stackS.pop();
        }
      }
    
    // Build stack for string t
  
      for (char c : t) {
        if (c != '#') {
            stackT.push(c);
        } else if (!stackT.empty()) {
            stackT.pop();
        }
      }
    
    // Compare the remaining characters in the stacks
       while (!stackS.empty() && !stackT.empty()) {
         if (stackS.top() != stackT.top()) {
            return false;
        }
        stackS.pop();
        stackT.pop();
    }
    
    // Check if both stacks are empty
       return stackS.empty() && stackT.empty();
    }
};
