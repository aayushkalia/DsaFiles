class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            sum = sum+nums[i];
            nums[i]=sum;
        }
        return nums;
    }
};
//Approach
// used a variable to track the running sum of array while iterating through the vector using one for loop.

// Complexity
// Time complexity:
// O(n)
// Space complexity:
// O(1) 
