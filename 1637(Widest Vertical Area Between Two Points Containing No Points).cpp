class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>extract;
        for(int i=0;i<points.size();i++){
            extract.push_back(points[i][0]);
        } 
        sort(extract.begin(), extract.end());
        int maxW=0;
        for(int i=1;i<extract.size();i++){
              maxW = max(maxW,extract[i]-extract[i-1]);
        }
    return maxW;
    }
};