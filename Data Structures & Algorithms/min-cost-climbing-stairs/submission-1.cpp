class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        std::vector<int> mem1(cost.size() + 2, -1);
        std::vector<int> mem2(cost.size() + 2, -1);

        int n1 = mccs(cost, 0, mem1);
        int n2 = mccs(cost, 1, mem2);
		return std::min(n1, n2);
    }

	int mccs(vector<int>& cost, size_t i, vector<int>& mem) {
        if (i >= cost.size()) {
            return 0;
        }
		if (i == cost.size() - 1) {
			mem.push_back(cost[i]);
			return cost[i];
		}

		if (mem[i+1] == -1) {
            mem[i+1] = mccs(cost, i+1, mem);
        }
		int n1 = cost[i] + mem[i+1];
        if (mem[i+2] == -1) {
            mem[i+2] = mccs(cost, i+2, mem);
        }
        int n2 = cost[i] + mem[i+2];

		return std::min(n1, n2);
	}
};
