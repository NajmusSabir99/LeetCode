class Solution {
public:
    int differenceOfSums(int n, int m) {
        int mSum=0;
        int nmSum=0;
        for(int i=0;i<=n;i++){
            if(i%m==0){
                mSum+=i;
            }else{
                nmSum+=i;
            }
        }
        return nmSum-mSum;
    }
};