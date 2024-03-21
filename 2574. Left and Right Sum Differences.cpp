class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       int n=nums.size();
       int sum1=0;
       int sum2=0;
       vector<int>leftsum(n,0);
       vector<int>rightsum(n,0);

       vector<int>ans(n,0);
       
       for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
            leftsum[i]=sum1;
       }
        for(int i=n-1;i>=0;i--){
            sum2+=nums[i];
            rightsum[i]=sum2;
       }
       for(int i=0;i<n;i++){
          ans[i]=abs(leftsum[i]-rightsum[i]);
            
       }
       return ans;
    }
};