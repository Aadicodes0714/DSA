class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        int left_most = -1, right_most = -1;

        // Find leftmost index
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                left_most = mid;
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        left = 0;
        right = n - 1;

        // Find rightmost index
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                right_most = mid;
                left = mid + 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return {left_most, right_most};
    }
};