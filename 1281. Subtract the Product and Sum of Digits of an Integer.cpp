class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int mul=1;
        std::string numString = std::to_string(n);
        for(char ch:numString){
            if(ch=='1'){
                sum+=1;
                mul*=1;
            } else if(ch=='2'){
                sum+=2;
                mul*=2;
            } else if (ch == '3') {
                sum += 3;
                mul *= 3;
            } else if (ch == '4') {
                sum += 4;
                mul *= 4;
            } else if (ch == '5') {
                sum += 5;
                mul *= 5;
            } else if (ch == '6') {
                sum += 6;
                mul *= 6;
            } else if (ch == '7') {
                sum += 7;
                mul *= 7;
            } else if (ch == '8') {
                sum += 8;
                mul *= 8;
            } else if (ch == '9') {
                sum += 9;
                mul *= 9;
            }
        }
        int ans = abs(sum - mul);
        return ans;
    }
};
