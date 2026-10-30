class Solution {
public:
    int rob(vector<int>& nums) {
		vector<int> mem(nums.size(), -1);
		return _rob(nums, 0, mem);
    }

	int _rob(vector<int>& nums, int i, vector<int>& mem) {
		if (i >= nums.size()) {
			return 0;
        }

		if (mem[i] != -1) {
			return mem[i];
        }	

		int robbed = nums[i] + _rob(nums, i + 2, mem);
		int not_robbed = _rob(nums, i + 1, mem);
		return mem[i] = std::max(robbed, not_robbed);
	}

};