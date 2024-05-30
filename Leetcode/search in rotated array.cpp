class Solution {
public:
    int findPivotindex(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1;
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Check if mid is pivot
            if (mid < end && nums[mid] > nums[mid + 1]) {
                return mid;
            }
            if (mid > start && nums[mid] < nums[mid - 1]) {
                return mid - 1;
            }

            // Decide which part to search
            if (nums[start] >= nums[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return -1;
    }

    int binarySearch(vector<int>& arr, int s, int e, int target) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (target > arr[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return -1;

        int pivotIndex = findPivotindex(nums);

        // If no pivot found, array is not rotated
        if (pivotIndex == -1) {
            return binarySearch(nums, 0, n - 1, target);
        }

        // If target is the pivot element
        if (nums[pivotIndex] == target) {
            return pivotIndex;
        }

        // Determine which subarray to search
        if (target >= nums[0] && target <= nums[pivotIndex]) {
            return binarySearch(nums, 0, pivotIndex, target);
        } else {
            return binarySearch(nums, pivotIndex + 1, n - 1, target);
        }
    }
};