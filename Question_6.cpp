class Solution {
public:
    bool rotateString(string s, string goal) {
      if (s.length() != goal.length()) {
          return false; // Different lengths, can't be equal after any number of shifts
      }
    
      int n = s.length();
      for (int i = 0; i < n; i++) {
        // Perform one shift on string s
          char first = s[0];
          for (int j = 0; j < n - 1; j++) {
              s[j] = s[j + 1];
          }
          s[n - 1] = first;
        
          // Check if s is equal to goal
          if (s == goal) {
              return true; // s can become goal after some number of shifts
          }
      }
    
      return false; // s cannot become goal after any number of shifts
    }

};
