#include <vector>
#include <algorithm>
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        int maxP = 1;
        for(int i=0;i<nums.size();i++){
           maxP = (nums[0]-1)*(nums[1]-1);
        }
        return maxP;
    }
};