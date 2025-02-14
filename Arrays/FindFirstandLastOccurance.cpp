class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    if (n == 0) return {-1, -1};  // If array is empty, return {-1, -1}

    if (n == 1) {  // Single element case
        if (nums[0] == target) return {0, 0};
        else return {-1, -1};
    }

    int st = 0, end = n - 1;
    int start = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;  // Prevents overflow
        if (nums[mid] == target) {
            start = mid;
            break;
        }
        else if (nums[mid] < target) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if (start == -1) return {-1, -1};  // If target is not found

    int first = start, last = start;

    // Find the first occurrence (move left)
    while (first > 0 && nums[first - 1] == target) {
        first--;
    }

    // Find the last occurrence (move right)
    while (last < n - 1 && nums[last + 1] == target) {
        last++;
    }

    return {first, last};  // Return the correct range
}

};
