class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        int dsum=0;
        int asnwer=0;
        for(int i=0;i<nums.size();i++){
            esum+=nums[i];
        }
        for (int digits : nums) {
        std::string num_str = std::to_string(digits);
        
        for (char digit : num_str) {
            if(digit=='1'){
                dsum+=1;
            }else if(digit=='2'){
                dsum+=2;
            }else if (digit == '3') {
                dsum += 3;
            } else if (digit == '4') {
                dsum += 4;
            } else if (digit == '5') {
                dsum += 5;
            } else if (digit == '6') {
                dsum += 6;
            } else if (digit == '7') {
                dsum += 7;
            } else if (digit == '8') {
                dsum += 8;
            } else if (digit == '9') {
                dsum += 9;
            }else{
                dsum+=0;
            }
        }
       }
       return esum-dsum;
    }
};