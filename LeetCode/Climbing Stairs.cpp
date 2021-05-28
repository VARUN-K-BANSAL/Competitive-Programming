/*
 Link --> https://leetcode.com/problems/climbing-stairs/submissions/
*/

class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        else{
            int first = 1 , sec = 2;
            for(int i=2; i<n; i++){
                int temp = first + sec;
                first = sec;
                sec = temp;
            }
            return sec;
        }
        return -1;
    }
};