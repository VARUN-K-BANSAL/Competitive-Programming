/*
 Link --> https://leetcode.com/problems/merge-sorted-array/submissions/
*/

class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int i = m + n - 1;
        int i1 = m - 1;
        int i2 = n - 1;
        while(i1 >=0 && i2 >= 0){
            if(n1[i1] > n2[i2])
                n1[i--] = n1[i1--];
            else
                n1[i--] = n2[i2--];
        }
        if(i2 >= 0)
            for(int j=0; j<i2+1; j++){
                n1[j] = n2[j];
            }
    }
};