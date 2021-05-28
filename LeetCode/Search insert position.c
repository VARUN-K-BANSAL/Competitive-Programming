/*
 Link --> https://leetcode.com/problems/search-insert-position/submissions/
*/

int searchInsert(int* a, int n, int target){    
    for(int i=0; i<n; i++){
        if(a[i] >= target){
            return i;
        }
    }
    return n;
}