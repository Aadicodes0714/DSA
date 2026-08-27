#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {


/*        vector<int> merged;
        
        // Step 1: Merge both arrays
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                merged.push_back(nums1[i]);
                i++;
            } else {
                merged.push_back(nums2[j]);
                j++;
            }
        }

        // Add remaining elements
        while (i < nums1.size()) merged.push_back(nums1[i++]);
        while (j < nums2.size()) merged.push_back(nums2[j++]);

        // Step 2: Find median
        int n = merged.size();
        if (n % 2 == 1) {
            return merged[n / 2];
        } else {
            return (merged[n/2 - 1] + merged[n/2]) / 2.0;
        }
        */
     
    int n1 = nums1.size();
        int n2 = nums2.size();
        int total = n1 + n2;

        int i = 0, j = 0;
        int count = 0;
        int prev = 0, curr = 0;

        int target = total / 2;

        while (count <= target) {
            prev = curr;

            if (i < n1 && (j >= n2 || nums1[i] <= nums2[j])) {
                curr = nums1[i];
                i++;
            } else {
                curr = nums2[j];
                j++;
            }

            count++;
        }

        if (total % 2 == 1)
            return curr;
        else
            return (prev + curr) / 2.0;
    }
};





    

