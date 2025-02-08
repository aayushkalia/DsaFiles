class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0,high = nums.size()-1,mid = 0;
        while(low<=high){
            mid =low+(high-low)/2;
            if(nums[mid]==target){ return mid;}
            else if(nums[mid]>target){high=mid-1;}
            else{
                low = mid+1;
            }

        }
        return low;
    }
};
// <!-- # Intuition -->
// <!-- Describe your first thoughts on how to solve this problem. -->

// # Approach
// There is a search going on dividing the array in half each time an element gets searched.

// # Complexity
// - Time complexity:
// o(logn)

// <!-- - Space complexity: -->
// <!-- Add your space complexity here, e.g. $$O(n)$$ -->

// # Code
// ```cpp []
// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int low = 0,high = nums.size()-1,mid = 0;
//         while(low<=high){
//             mid =low+(high-low)/2;
//             if(nums[mid]==target){ return mid;}
//             else if(nums[mid]>target){high=mid-1;}
//             else{low = mid+1;}
//         }

//         return low;
//     }
// };
// ```