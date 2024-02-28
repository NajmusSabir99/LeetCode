class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>result(n,false);
        int maxCandies = candies[0];
        for (int i = 1; i < n; ++i) {
            if (candies[i] > maxCandies) {
                maxCandies = candies[i];
            }
        }
        for(int i=0;i<n;i++){
                if(candies[i]+extraCandies>=maxCandies){
                    result[i] = true;
                }else{
                    result[i]= false;
                } 
            }    
        return result;
    }
};