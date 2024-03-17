class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int countwords=0;  
        int bigger=0;
        for (const std::string& sentence : sentences) {
            for(char ch: sentence){
                if(ch == ' '){ 
                    countwords++;
                }     
            }
            if(countwords>bigger){
                bigger = countwords;
            }
            countwords=0;
        }
        bigger++;
        return bigger;
    }
};
