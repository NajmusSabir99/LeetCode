class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string a;
        for(char ch: s){
            if(ch==' '){
                count++;
                if (count == k) {
                    break;
                }
            }
            a+=ch;
        }
      
        return a;
    }
};