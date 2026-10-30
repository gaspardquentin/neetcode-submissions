class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
		vector<int> mem1(nums.size(), -1);
        vector<int> mem2(nums.size(), -1);

        
		return std::max(_rob(nums, 0, nums.size() - 1, mem1), _rob(nums, 1, nums.size(), mem2));
    }

	int _rob(vector<int>& nums, int i, int end, vector<int>& mem) {
		if (i >= end) {
			return 0;
        }

		if (mem[i] != -1) {
			return mem[i];
        }	

		int robbed = nums[i] + _rob(nums, i + 2, end, mem);
		int not_robbed = _rob(nums, i + 1, end, mem);
		return mem[i] = std::max(robbed, not_robbed);
	}

};