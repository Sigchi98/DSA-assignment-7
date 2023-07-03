class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
      int n = coordinates.size();
    
      if (n <= 2) {
          return true; // A line can be formed with 0 or 1 point
      }
    
    // Calculate the slope of the line formed by the first two points
      int x0 = coordinates[0][0];
      int y0 = coordinates[0][1];
      int x1 = coordinates[1][0];
      int y1 = coordinates[1][1];
      int deltaX = x1 - x0;
      int deltaY = y1 - y0;
    
    // Check if all other points lie on the same line
      for (int i = 2; i < n; i++) {
          int x = coordinates[i][0];
          int y = coordinates[i][1];
        
        // Calculate the slope of the line formed by the current point and the first point
          int currentDeltaX = x - x0;
          int currentDeltaY = y - y0;
          
        // Check if the slopes are equal
          if (deltaX * currentDeltaY != deltaY * currentDeltaX) {
              return false; // Points do not lie on the same line
          }
      }
    
      return true; // All points lie on the same line
     }
};
