class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>mergeS;
        int i=0;
        int j=0;
        int n = nums1.size();
        int m = nums2.size();
        while (i < n) {
            mergeS.push_back(nums1[i]);
            i++;
        }
        while (j < m) {
            mergeS.push_back(nums2[j]);
            j++;
        }
        double mid=0;
        sort(mergeS.begin(), mergeS.end());
        int x = mergeS.size();
        if(x%2!=0){
             mid = mergeS[x/2];
        }else{
            mid = (mergeS[x/2-1] + mergeS[x/2]) / 2.0;
        }
        return mid;
    }
};