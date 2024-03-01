class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n = accounts[0].size();
        int Maxsum = 0;
        for (int i = 0; i <m; ++i) {
            int Rowsum = 0;
            for (int j = 0; j <n; ++j) {
              Rowsum = Rowsum + accounts[i][j];
           }  
             if(Rowsum>Maxsum){
                Maxsum = Rowsum;
             }  
        }
        return Maxsum;
        }
};