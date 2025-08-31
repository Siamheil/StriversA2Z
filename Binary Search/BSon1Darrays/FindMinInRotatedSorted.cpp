class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high]) {
                // min is in right half
                low = mid + 1;
            } else {
                // min is in left half (including mid)
                high = mid;
            }
        }
        
        return nums[low];
    }
};
