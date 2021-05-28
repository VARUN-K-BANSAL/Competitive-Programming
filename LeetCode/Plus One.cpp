/*
 Link --> https://leetcode.com/problems/plus-one/submissions/
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> a = digits;
        a[a.size() - 1] += 1;
        for(int i=a.size() - 1; i>0; i--){
            if(a[i] == 10){     // checking for carry condition
                a[i] = 0;
                a[i-1] += 1;
            }
        }
        if(a[0] == 10){         // checking for carry overflow
            a[0] = 0;
            a.insert(a.begin() , 1);
        }
        return a;
    }
};