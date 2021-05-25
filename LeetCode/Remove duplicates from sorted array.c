/*
Link --> https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/
*/


int removeDuplicates(int* nums, int n){
    if(n == 0)
        return 0;
    else{
        int count = 1;
        for (int i=1; i<n; i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[count++] = nums[i];
            }
        }
        return count;
    }
}