class Solution {
public:
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string res1;
    string res2;
    
    for(const string& str: word1){
        res1+=str;
    }
    for(const string& str: word2){
        res2+=str;
    }
    
    if (res1.size() != res2.size()) {
        return false;
    }
    
    for(int i=0;i<res1.size();i++){
        if(res1[i]!=res2[i]){
             return false;
        }
    }

    return true; 
}
};
