/*
 Link --> https://leetcode.com/problems/maximum-subarray/submissions/
*/

class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int min = 0 , max = a[0] , sum = 0;
        for (int i=0; i<a.size(); i++){
            sum += a[i];
            if(sum - min > max)
                max = sum - min;
            if(sum < min)
                min = sum;
        }
        return max;
    }
};