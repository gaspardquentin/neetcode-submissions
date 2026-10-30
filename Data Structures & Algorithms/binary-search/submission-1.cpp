
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i, j, mid;
		i = 0;
		j = nums.size() - 1;
		while ( i <= j ) {
			mid = (i+j)/2;
			if (nums[mid] == target) { return mid; }
			else if (nums[mid] < target) { i = mid + 1; }
			else { j = mid - 1; }
		}

		return -1;
    }
};