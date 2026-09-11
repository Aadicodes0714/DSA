#include <vector>

class Solution {
public:
    int peakIndexInMountainArray(std::vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] < arr[mid + 1]) {

                left = mid + 1;
            } else {
                // We are on the decreasing slope or at the peak, peak is at or to the left
                right = mid;
            }
        }
      
        return left;
    }
};