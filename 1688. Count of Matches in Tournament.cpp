class Solution {
public:
    int numberOfMatches(int n) {
        int matches = 0;
        int team = 0;
        int count = 0;
        for(int i=n;i>1;i=i-matches){
            if(i%2==0){
                matches = i/2;
                team = i-matches;
                count+=matches;
            }else{
                matches = (i-1)/2;
                team = i-matches;
                count+=matches;
            }
        }
        return count;
    }
};