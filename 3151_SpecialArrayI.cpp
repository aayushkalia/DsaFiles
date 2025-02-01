class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1) return true;
        bool flag = true;
        for(int i =0;i<nums.size()-1;i++){
            if((nums[i]%2==0 && nums[i+1]%2!=0)||(nums[i]%2!=0 && nums[i+1]%2==0)){
                flag= true;
            }
            else {flag= false;break;}

        }
        return flag;
    }
};

solution post
Intuition
Parity of numbers is when one is odd, other is even. so, handling the edge case and then checking others in the process resulted in the following code.

Approach
If the array contains only one element, it is automatically special, so return true.
Iterate through the array and check whether each adjacent pair follows the alternating parity rule:
If nums[i] is even, nums[i+1] must be odd.
If nums[i] is odd, nums[i+1] must be even.
If we find two adjacent elements with the same parity, return false.
If we reach the end of the loop without breaking, return true.

Complexity
Time complexity:
O(n)

Space complexity:
O(1)

Why This Solution Works Well
✅ Efficient – It runs in O(n) time, scanning the array once.
✅ Simple and Readable – Uses straightforward parity checks.
✅ Handles Edge Cases – Works for single-element arrays and various input types.