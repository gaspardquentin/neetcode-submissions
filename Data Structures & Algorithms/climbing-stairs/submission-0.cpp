class Solution {
	std::vector<int> mem = {1, 2, 3};
public:
    int climbStairs(int n) {
		if (n <= mem.size()) {
			return mem[n-1];
		}

		int n1 = climbStairs(n-1);
		int n2 = climbStairs(n-2);
		mem.push_back(n1 + n2);
		
		return n1 + n2;
    }
};