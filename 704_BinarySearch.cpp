// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity..
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low =0,high = nums.size()-1;
        int mid = 0,flag =0;
        while(low<=high){
            mid = (high+low)/2;
            if(nums[mid]==target) {flag =1;return mid;}
            else if(nums[mid]<target){low=mid+1;}
            else {high = mid-1;}
        }
        if(flag ==0) return -1;
        return mid;
    }
};